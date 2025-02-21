# # ~~~~~~~~~~~~~~~~~First Task~~~~~~~~~~~~~~~~~ #
# # Write a Python program to count the number 4 in a given list.
# def List_Count_4(LIST_NUMS):
#     count = 0
#     for num in LIST_NUMS:
#         if num == 4:
#             count +=1
#     return count

# print(List_Count_4([1,4,6,7,4]))
# print(List_Count_4([1,4,6,7,4,2,4,1,4,5]))

# # ~~~~~~~~~~~~~~~~~Second Task~~~~~~~~~~~~~~~~~ #
# # Write a Python program to test whether a passed letter is a vowel or not.
# def vowel_check(chr):
#     vowels = 'aeiouc  
#     return chr in vowels
# print(vowel_check('w'))
# print(vowel_check('o'))

# # ~~~~~~~~~~~~~~~~~Third Task~~~~~~~~~~~~~~~~~ #
# # Write a python program to access environment variables.
# # import os
# # print(os.environ)
# # print(os.environ['HOME'])
# # print(os.environ['PATH'])


# # ~~~~~~~~~~~~~~~~~Forth Task~~~~~~~~~~~~~~~~~ #
# Write a Python program which accepts the radius of a circle from the user and compute the 2 area.
# from math import pi 
# def Circle_Area(redius):
#     area = pi * redius ** 2
#     return area
# print(Circle_Area(5))  


# # ~~~~~~~~~~~~~~~~~Fifth Task~~~~~~~~~~~~~~~~~ #
# # Print the calendar of a given month and year.
# import calendar
# year = int(input('Please Enter the Year: '))
# Month = int(input('Please Enter the Month: '))
# print(calendar.month(year, Month))