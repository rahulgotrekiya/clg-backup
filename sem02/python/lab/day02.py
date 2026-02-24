# -*- coding: utf-8 -*-
"""
Created on Wed Jan  7 13:25:58 2026

@author: mcaa250003
"""

# # Essential Assignment:
# # 1.	Write a program to find meter to kilometer.

# meter = int(input("Enter Meter: "))
# print (meter, "Meter to KM", meter/ 1000)

# # 2.	Write a program to find area of a rectangle. (Area=l*b). Take input parameters from user
# l = int(input("Enter Length: "))
# b = int(input("Enter breadth: "))

# print("Area of Rectangle: ", l*b)

# # 3.	Write a program to find volume of cube. (Area=l*b*h). Take input parameters from user

# l = int(input("Enter Length: "))
# b = int(input("Enter breadth: "))
# h = int(input("Enter height: "))

# print("Volume of cube: ", l*b*h)

# # 4.	Write a program to find area of triangle. (Area=(l*b)/2). Take input parameters from user

# l = int(input("Enter Length: "))
# b = int(input("Enter breadth: "))
# h = int(input("Enter height: "))

# print("Area of Triangle: ", (l*b)/2)

# # 5.	WAP to convert the given temperature from Fahrenheit to Celsius using the formula C = (F – 32) / 1.8


# fahrenheit = int(input("Enter temperature in Fahrenheit: "))

# celsius = (fahrenheit - 32) / 1.8

# print("Temperature in celsius: ", celsius)


# # 6.	WAP to convert temperature from Celsius to Fahrenheit where temperature in Celsius is entered by user. 
# # (F= C*(9/5) + 32)

# fahrenheit2 = celsius*(9/5) + 32
# print("Temperature in fahrenheit2: ", fahrenheit2)

# # 7.	Take a number as user input and convert it into Binary, Octal and Hexadecimal numbers

# num = eval(input("Enter Number: "))

# binary = bin(num)
# octal = oct(num)
# hexadecimal = hex(num)

# print ("Integer:", integer, "Binary:", binary, "Octal:", octal, "Hexadecimal:", hexadecimal)

# # 8.	Take binary, octal and hexadecimal numbers as an input and convert them to Decimal number

# binary1 = eval(input("Enter Binary Number: "))
# octal1 = eval(input("Enter Octal Number: "))
# hexadecimal1 = eval(input("Enter Hexadecimal Number: "))

# print (int(binary1))
# print (int(octal1))
# print (int(hexadecimal1))

# # 9.	Without applying condition statement display output as “true” if the 1st number greater than the 2nd number and “false” if 2nd number is larger than the 1st one.

# n1 = 10
# n2 = 5

# print(n1 > n2)

# # 10.	Take 3 different inputs from user and display their data type.

# inp1 = input("Enter Value 1 : ")
# inp2 = eval(input("Enter Value 2 : "))
# inp3 = eval(input("Enter Value 3 : "))

# print(type(inp1))
# print(type(inp2))
# print(type(inp3))

# # 11. Find the minimum and maximum of 2 numbers

num1 = 10
num2 = 5

# if num1 > num2:
#     print(num1, "is Grater")
# else:
#     print(num2, "is Grater")

# 12.	Perform binary “AND” and “OR” operation for given 2 integer numbers from user input

print("Binary And: ", num1&num2)
print("Binary And: ", num1|num2)

# Desirable Assignment: 
# 1.	Write a program to calculate area of circle. (pi*r*r)

pi = 3.14
r = 10
aoc = pi*r*r
print("Area of circle: ", aoc)

# 2.	Write a program in C to calculate simple interest using formula SI = (P*R*N) / 100. Take all parameters as input from user

p = 100
r = 20
n = 10
si = (p*r*n) / 100
print("Simple interest : ", si)

# 3.	Without applying condition statement display output as “true” if a number is an even number and “false” if the number is an odd number

print(num1 % 2 == 0)

# 4.	Find the minimum and maximum of 2 numbers

if num1 > num2:
    print(num1, "is Max")
    print(num2, "is Min")
else:
    print(num2, "is Max")
    print(num1, "is Min")
