import speech_recognition as sr              # For speech-to-text
from gtts import gTTS                        # For text-to-speech
import pygame                                # To play audio
import time                                  # To wait while audio is playing
import subprocess
import datetime                              # To get current time
import os                                    # To run OS commands like open apps


class AlexaAssistant:
    def __init__(self):
        self.listener = sr.Recognizer()          # Fixed: use correct variable name
        pygame.mixer.init()

    # --- Speak a text using gTTS and play it using pygame ---
    def speak(self, text):
        tts = gTTS(text=text, lang='en')
        filename = "output.mp3"
        tts.save(filename)
        pygame.mixer.music.load(filename)
        pygame.mixer.music.play()
        while pygame.mixer.music.get_busy():
            time.sleep(0.1)

    # --- Get voice input from microphone ---
    def get_command(self):
        try:
            with sr.Microphone() as source:
                print("Listening...")
                voice = self.listener.listen(source)
                command = self.listener.recognize_google(voice)
                command = command.lower()
                return command
        except Exception as e:
            self.speak("Sorry, I could not hear you.")
            print("Error:", e)
            return ""

    # --- Respond to commands ---
    def respond(self, command):
        if "hello" in command:
            self.speak("Hello, how can I assist you today?")

        elif 'how are you' in command:
            self.speak("I am fine, thank you for asking. How can I help you?")

        elif 'open google' in command:
            self.speak("Opening Google")
            self.open_in_firefox("https://www.google.com")

        elif "open github" in command:
            self.speak("Opening GitHub")
            self.open_in_firefox("https://github.com/Matarawy01")

        elif "open gmail" in command:
            self.speak("Opening Gmail")
            self.open_in_firefox("https://mail.google.com/mail/u/0/#inbox")

        elif 'open youtube' in command:
            self.speak("Opening YouTube")
            self.open_in_firefox("https://www.youtube.com")

        elif 'time' in command:
            current_time = datetime.datetime.now().strftime('%I:%M %p')
            self.speak(f"The time is {current_time}")

        elif 'search for' in command:
            search_query = command.replace('search for', '').strip()
            self.speak(f"Searching for {search_query}")
            url = f"https://www.google.com/search?q={search_query}"
            self.open_in_firefox(url)

        elif 'exit' in command or 'stop' in command or 'quit' in command:
            self.speak("Goodbye!")
            exit()

        else:
            self.speak("Sorry, I didn't understand that command.")

    
    def open_in_firefox(self, url):
        try:
            subprocess.Popen(["firefox", url])
        except FileNotFoundError:
            self.speak("Firefox is not installed or not found in your system path.")
            

    # --- Main loop ---
    def run(self):
        while True:
            command = self.get_command()  # Fixed: call get_command instead of self.listener()
            if command and "alexa" in command:
                self.speak("Yes sir")

                # Now listen for actual command
                actual_command = self.get_command()
                if actual_command:
                    self.respond(actual_command)


# --- Entry Point ---
if __name__ == "__main__":
    assistant = AlexaAssistant()
    assistant.run()
