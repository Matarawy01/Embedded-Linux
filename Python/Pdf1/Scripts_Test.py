# import pyfiglet
# result = pyfiglet.figlet_format("Abdelrahman\nMatarawy")
# print(result)
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ #
# import os
# Favorite_Folders = [
#     "/mnt/data/Embedded\ Linux/1-Python",
#     "/home/matarawy/Embedded_Linux_Practice",
#     "/home/matarawy/OCR_TEST"
# ]

# val = int(input("Please Select your Dir (index start by 0): "))

# os.popen(r"nautilus {}".format(Favorite_Folders[val]))
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ #
# from gtts import gTTS
# import vlc
# import time
# myobj = gTTS(
#     text = 'صباح الخير يا عبودي', lang= 'ar', slow= False)
# myobj.save('welcome.mp3')
# p = vlc.MediaPlayer('./welcome.mp3')
# p.play()
# while True:
#     pass