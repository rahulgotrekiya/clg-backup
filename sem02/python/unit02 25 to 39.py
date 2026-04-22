# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

# # 25.	Take a tuple input and print all the elements of it in reverse sequence
# t1 = eval(input("Enter Tuple:"))

# for i in reversed(t1):
#     print(i)
    
# print(type(t1))

        
# # 26.	Copy the inputted string to another string by replacing the character ‘o’ with ‘@’ Eg. ‘Hello’ will be copied to another string as ‘Hell@’ and ‘Good Morning’ will become ‘G@@d M@rning’ (Without using replace())

# string = input("Enter String: ")

# new_string = 

# # 27.	Take a string as an input from the user. Find total number of vowels in it. (Hint: take a tuple of vowels)
# string2 = input("Enter String: ")

# # vowels = ('a','e','i','o','u')

# # 28.	Create a tuple for name say t1 (FirstName, MiddleName, LastName)

# t1 = ("Rahul", "Shankarbhai", "Gotrekiya")

# # 29.	Create a tuple say t2 for marks of 5 subjects
# t2 = (50, 60, 70, 80, 90)

# # 30.	Make a total of all the marks and print it. (with and without using sum() method)
# print("Total Marks (With sum): ", sum(t2))

# total = 0
# for mark in t2:
#     total += mark
# print("Total Marks (without sum()): ", total) 

# # 31.	Make a tuple t3 having 2 elements as t1 and t2 (tuples created above) – It is called a nested tuple
# t3 = (t1, t2)
# print(t3)

# # 32.	Take an input number and find whether that is present as an element in the tuple t3 or not.
# num = int(input("Enter a number to search in t3: "))

                                                                                             
# if found:
#     print("Yes, number is present in t3")
# else:
#     print("No, number is not present in t3")

# flag = False
# for item in t3:
#     if num in item:
#         flag = True
#         break
# print("Number is present in t3")


# # 33.	Create a tuple of 5 fruits. Ask the user to input a fruit name and search that name in the given fruit tuple. Display suitable messages
# fruits = ("Apple", "Banana", "Mango", "Orange", "Grape")
# search_fruit = input("Enter a fruit name for finding it in tuple: ")

# if search_fruit.capitalize() in fruits:
#     print("Fruit is in tuple")
# else:
#     print("Fruit not found")

# # 34.	Create a tuple of cities of Gujarat by taking user input.

# # cities = eval(input("Enter Cities:"))
# cities = ("Ahmd", "Rajkot", "Surat")
# print(cities)

# # 35.	Find the length of name of each city in the above tuple. With and without len() method

# for city in cities:
#     print("Using Len: ", len(city))
    
# for city in cities:
#     without_len = 0
#     for char in city:
#         without_len += 1
#     print("Without len: ", without_len)



# 36.	Create a nested tuple t4 of your (name, (hobbies), (friends), degree)
t4 = ("Raj", ("Coding", "Reading"), ("Amit", "Sita"), "B.Tech")

# 37.	Find an element in the nested tuple (t4) and print its position if found, otherwise print “Not found”

find_val = input("Enter element to find in t4: ")
flag = False
for i in range(len(t4)):
    if t4[i] == find_val:
        print(f"Found at position: {i}")
        flag = True
    elif isinstance(t4[i], tuple):
        if flag in t4[i]:
            print(f"Found at position: {i} (inside sub-tuple index {t4[i].index(find_val)})")
            flag = True
if not flag:
    print("Not found")


# 38.	Take a tuple of 10 integer numbers and segregate odd and even numbers in 2 different tuples.

