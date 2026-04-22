# -*- coding: utf-8 -*-
"""
Created on Mon Jan 12 10:59:38 2026

@author: mcaa250003
"""

# range(1:8)
# range(start:stop:step)  range(1:9:2)
#     start-including
#     stop-excluding
#     1
#     2
#     3
#     4
#     5
#     6
#     7
#     for(i = 1; i <= 8; i++)

# # if 
# if condition:
#     print("Hi")
# else:
#     print("Hello")
        
# # elif
# if condition:
        
# elif condition2:

# else

# # while

# while (i<=20):
#     print(i)
#     i+=1 
# print ("hello")        


# # for

# for i in range(1,3):
#     print (i) 
#     print ("hello")
    
# # # switch case
# choice = 1
# match choice:
#     case 1:
#         print("Option one")
#     case 2:
#         print("Option two")
#     case 3:
#         print("Option three")
#     case _:
#         print("No one")




# Essential Assignment:
# 1.	Create a menu driven program for string manipulation

# str = input("Enter string: ")

# print("\n1.	Find the length of a string\n2.	Print the string in upper case\n3.	Print the string in lower case\n4.	Print the string with initial capital\n5.	Split the string")

# ch = 1

# while (ch < 6):
    
#     ch = int(input("\nEnter Your choice: "))
    
#     match ch:
#         case 1:
#             print("\nThe length of a string:", len(str))
#         case 2:
#             print("\nThe string in upper case:", str.upper())
#         case 3:
#             print("\nThe string in lower case:", str.lower())
#         case 4:
#             print("\nThe string with initial capital:", str.capitalize())
#         case 5:
#             print("\n Split the string:", str.split())
#         case _:
#             print("No one")
        

# a.	Find the length of a string
# b.	Print the string in upper case
# c.	Print the string in lower case
# d.	Print the string with initial capital
# e.	Split the string
# Desirable Assignment: 
            
# 2.	Take two strings as input s1 and s2 and check whether s2 is present in s1 or not.

s1 = input("Enter string 1: ")
s2 = input("Enter string 2: ")

if s2 in s1:
    print("Yes")
else :
    print("No")

# 3.	If s2 is a part of s1 then print the 1st and last occurrences of it 

if s2 in s1:
    print(s1.find(s2))
else :
    print("No")

# 4.	If s2 is present in s1 then also count number of times it occurs in s1.

if s2 in s1:
    print(s1.count(s2, 0))
else :
    print("Not")


# 5.	Count total number of words in the string input by user 

print(len(s1.split(" ")))