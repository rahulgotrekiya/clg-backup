# -*- coding: utf-8 -*-
"""
Created on Sat Jan 24 12:27:50 2026

@author: mcaa250003
"""

# s = {1, 2, 3, 4}

# fruits = set(["apple", "banana", "grapes"])
# print(fruits)    

# print(s)

# fruits.add("Strawberry")
# print(fruits)

# fruits.update(["guava", "banana"])
# print(fruits)

# fruits.remove("Banana")  # error when not find
# print(fruits)
# fruits.discard("Banana") # No error when not find
# print(fruits)

# print(fruits.pop())

# Set operations

s1 = {1,2,3,4,5,6}
s2 = {1,3,9,10}
print(s1)
print(s2)

s3 = s1 | s2    # Union
print(s3)
       
s4 = s1 & s2    # Intersection
print(s4)

s5 = s1 - s2    # Diffrence
print(s5)

s6 = s2 - s1    # Diffrence
print(s6)

s7 = s1 ^ s2    # Symmetric Diffrence
print(s7)
