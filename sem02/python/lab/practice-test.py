# -*- coding: utf-8 -*-
"""
Created on Sat Feb  7 10:04:07 2026

@author: mcaa250003
"""
import random

# 1.	Consider 2 lists, having random numbers between 1 and 50 in each list. Display the output as defined below: Create user defined functions for performing both the operations.


l1=[random.randrange(1, 50) for i in range(10)]
l2=[random.randrange(1, 50) for i in range(10)]

print("l1: ",l1)
print("l1: ",l2)

set_l1 = set(l1)
set_l2 = set(l2)

# a.	Display all the elements which are common in both the lists

common = set_l1 & set_l2
print("Common Elements:", list(common))

# b.	Display only the elements which are present in list1 but not in list2

only_l1 = set_l1 - set_l2
print("Only in l1:",set(only_l1))

# 2.	Create a list of 10 strings by taking user input. Separate the elements based on the length of the string.
    
# names=[]

# for i in range(10):
#     name_inp = input("Enter String:")
#     names.append(name_inp)

# print(names)

# d = {}
     
# for i in names:
#     s = len(i)
#     if s not in d:
#         d[s] = [i]
#     else:
#         d[s].append(i)

# print(d)

# 3.	Read the random lists from the text file where numbers are comma separated and one list in one line. Show the list in ascending order

# Eg. unsorted list: 95 79 19 43 52 in 1st line of the file) Similarly many more unsorted list are there.
# o/p : [19, 43, 52, 79, 95]


# 4.	Consider the list of STATES that contains its Lok Sabha and Rajya Sabha seats as below:
# {"MP": (29, 11), "UP": (80, 31), "TN": (39, 18) ,"MH": (48, 19) ,"GJ": (26, 11), "RJ": (25, 10), "HP": (4, 3) }

states = {
    "MP": (29, 11),
    "UP": (80, 31),
    "TN": (39, 18),
    "MH": (48, 19),
    "GJ": (26, 11),
    "RJ": (25, 10),
    "HP": (4, 3)
}

print() 
for i, j in states.items():
    print(i, j)
    
print()

# Create a menu driven program to find following data. Create user defined functions
# •	Total number of seats in all given states.

for i, j in states.items():
    print(i, ":", sum(j))

print()

# for i in states:
#     print(i, ":", sum(states[i])) 

# •	Display the list in descending order of their Lok Sabha seats.

temp={}

l = len(states)

for i in range(l):  
    max_val=0
    for k in states:
        if states[k][0] > max_val:
            max_val = states[k][0]
            t=k
    temp[t]=states[t]
    del states[t]
    l=l-1

print("Org:",states)
print()
print("Decending",temp)

print()
# •	States having Least number of Rajya Sabha Seats

# m=99999

# for i, j in states.items():
#     if m > j[1]:
#         m = j[1]
#         min_val = i

# print("Least number of Rajya Sabha Seats:", min_val, ":", states[min_val][1])
