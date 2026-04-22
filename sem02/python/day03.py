# -*- coding: utf-8 -*-
"""
Created on Sat Jan 10 11:50:13 2026

@author: MCAA250003
"""
# # bitwise operators: &, |, ^, <<, >>, ~
# a = 1;
# b = 2;
# name = 'rahul';
# print(a, b, sep=":")

# print('value=%i' % a)
# print('hello (%s)' % name)
# print('hello (%20s)' % name)
# print('hello (%-0s)' % name)

# Essential Assignment:
# 1.	Print multiple lines using single print statement. as – 
#                      I like “Python Programming” very much
#                      It is my favorite subject

str = "I like \"Python Programming\" very much \nIt is my favorite subject"
print(str)

# 2.	Print a part of the above string “very much” using the slice operator.

print(str[28:38])


# 3.	Print the last 5 characters from the above given string

print(str[len(str)-5:])
print(str[-5:])

# 4.	Print only the second line of the given string

print(str[25:])


# 5.	Take two strings as input from the user and concatenate them.

# fistName = input("Enter Your fistname: ")
# lastName = input("Enter Your lastname: ")
# print (fistName + " " + lastName)

# 6.	Take a number and a string from the user and repeat the string for that many times.
str2 = "abc"

print (3*str2)

# 7.	Take an input character from the user and check whether that character 
# is present in the above given string or not. – Using ‘in’ operator and using ‘not in’ operator
print("s" not in "dssdsd")