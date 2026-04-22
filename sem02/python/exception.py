# -*- coding: utf-8 -*-
"""
Created on Tue Mar 17 13:14:02 2026

@author: ex604_128
"""

# WAP in python to enter 3 numbers and perform the oprations with the 3 formulas divisionByZero exection should rais if divied by zero and also update the value of that expression to 100 display the values of a,c,d and, z  
# c = (a+b)/d and 
# z = (a-b)/(b-c)


a=int(input("Enter A: "))
b=int(input("Enter B: "))
d=int(input("Enter D: "))

try:
    c = (a+b)/d 
    z = (a-b)/(b-c)
    print(f"C: {c}")
    print(f"Z: {z}")
except :
    print("Divide by Zero")
    z=100
    print(f"Z: {z}")



print(f"A: {a}")
print(f"B: {b}")
print(f"C: {c}")
print(f"D: {d}")
print(f"Z: {z}")


# WAP to input a number and display all it multiples uptill 100.
# Check wheter the entered number is < 20 if > 20 it shoud raise the accersion error an print appropriate message.

try:
    num=int(input("Enter a number: "))
    assert num < 20
    
    m=1;
    while (num*m) < 100:
        print(num*m)
        m += 1
except AssertionError:
    print("Enter number less than 20:")
    


















