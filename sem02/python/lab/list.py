# -*- coding: utf-8 -*-
"""
Created on Mon Jan 19 12:17:40 2026

@author: ex604_51
"""

l1 = [1,2,3,4,2,4,2]
# print(l1)

# for i in l1:
#     print(i)

# l1[2]=100
# print(l1)

# # Slicing
# print(l1[0:2])
# print(l1[2:])
# print(l1[-4:-1])

# # l2=[]

# # t = eval(input("Enter the numbers in the list: "))
# # print(t)

# t1 = [1, "Two", 3, 4]
# print(t1)

# t2 = t1
# print(t2)

# t1.append("mca")
# print(t1)
# print(t2)
# t2.append("Lj university")
# print(t2)
# print(t1)

# # Clone using slicing
# t3 = t2[:]
# print(t3)

# t2.append(1000)
# print(t2)
# print(t3)

# # Copy
# t3.t2.copy()

# Functions

l1.append(100)
print(l1)
# index wise delete then use del
del l1[2]
print(l1)
# value wise delete then use remove()
l1.remove(100)
print(l1)

# print(l1.sum()) # not working

print(l1.index(2)) # show the index of the element passed
l1.append(200) # adds an element at the end of list
l1.insert(2, 200) # allows to add element at specific position
print(l1)

# l1.extend(l2) # appends list l2 at the end of l1
print("Count", l1.count(2)) # returns the number of occurence of 200
l1.remove(200) # deletes 200 from the list
l1.pop() # it removes the last element
l1.sort()
l1.sort(reverse=True) 
print(l1)
l1.reverse()
print(l1)
# l1.clear()
print(l1)
print(max(l1))
print(min(l1))
print(len(l1))
