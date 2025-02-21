import pyautogui 
from time import sleep
import webbrowser

#sleep(2)
#pyautogui.write('Hello Matarawy')
################################################
#sleep(2)
#while True:
#   print(pyautogui.position())
#   sleep(0.2)
################################################
#sleep(2)
#pyautogui.moveTo(100,100,duration=1)
#sleep(1)
################################################
# try:
#     location = None
#     while location is None:
#         location = pyautogui.locateOnScreen('play.png')
#         sleep(1)
#     pyautogui.click(location.left+5, location.top+5)
# except pyautogui.ImageNotFoundException:
#     print("Image not Found")
################################################
# pyautogui.hotkey('win') # to enter search of linux
# sleep(1)                # delay to open search tap
# pyautogui.typewrite('Terminat')
# sleep(1)
# try:
#     location = None
#     while location is None:
#         location = pyautogui.locateOnScreen('Terminal.png')
#         sleep(1)
#     pyautogui.click(location.left, location.top + 10, duration=1)
# except pyautogui.ImageNotFoundException:
#     print("Image not Found")
################################################
# url = 'https://docs.google.com/spreadsheets/d/1j4r0FMX9IhY_X8Mw5c1bTgo0SPxcgUu0DK8nQIvBeB4/edit?gid=0#gid=0'
# webbrowser.open(url, new = 2) # to open new tap 
# ######## First Way ##########
# #sleep(3)
# # try:
# #     location = None
# #     while location is None:
# #         location = pyautogui.locateOnScreen('task.png', confidence=0.9)
# #         sleep(3)
# # except pyautogui.ImageNotFoundException:
# #     print("Image not found")
# #     exit()
# ######## second Way ##########
# location = None
# while location is None:
#     try:
#         location = pyautogui.locateOnScreen('task.png', confidence=0.9)
#         sleep(3)
#     except pyautogui.ImageNotFoundException:
#         print("Image not found")


# pyautogui.click(location.left + 5, location.top + 10, duration = 1)
# pyautogui.keyDown('shift')
# sleep(1)
# for i in range(8):
#     pyautogui.keyDown('down')
# #pyautogui.keyUp('shift')
# pyautogui.hotkey('delete')
################################################