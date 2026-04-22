# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""


l1 = ["Rahul", "Rahul", "Raj", "Prashant", "Kartik", "Kush"]

# # a.	Count total number of students from the list L1

# print(len(l1))

# # b.	Add one more student in the list L1

# l1.append("Meet")
# print(l1)

# # c.	Display all the students in the sorted order

# # l1.sort(key=None)
# print(l1)

# # d.	Check a particular student’s name is present in the list or not

# name = "Rahul"

# if name in l1:
#     print(name, "is present in list")
# else:
#     print(name, "is Not present in list")
    
# # e.	If the student’s name is present in the list, print total number of same name students in the list L1 and display the position of 1st student

# if name in l1:
#     print(name, "is repeated ", l1.count(name), "times at position",  l1.index(name), "and", )
# else:
#     print(name, "is Not present in list")

# # f.	Remove the last student from the list L1

# print(l1[-1:])

# g.	Remove a particular student from the list. (Take a name of student from the user.)

# take_name = input("Enter name for remove from list: ")

# l1.remove(take_name)
# print(l1)

# h.	While removing the student from the list, if multiple students have same name then remove all of them from the list.

# name = input("Enter name for remove from list: ")

# if name in l1:
#     # l1.remove(name)

# print(l1)
    

# # 40.	Create a list of 10 numbers and find the maximum and minimum numbers from it.

# no = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

# print(max(no))
# print(min(no))

# # 41.	Create a list of alphabets and count total number of vowels in it.

# alphabets = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l"]

# vowels = ['a','e','i','o','u']

# count = 0
# for a in alphabets:
#     if a in vowels:
#         count += 1    
# print("Total vowels:", count)


# # 42.	Create a list of even numbers between 1 to 21 using range()

# even = []
# for i in range(1, 21):
#     if i%2 == False:
#         even.append(i)        

# print(even)

# # 43.	Create a list of employees (nested list) with their personal details like [name, age, salary, expertise] in a list. Ask the user to enter name and display the details of that employee. If the employee is not in the list, print error message.

# emplist = []

# for i in range(1, 3):
#     li = []
#     emp_no = int(input("Emp No: "))
#     emp_name = input("Emp Name: ")
#     salary = float(input("Enter Salary: "))
#     expertise = input("Enter Expertise: ")
#     li.append(emp_no)
#     li.append(emp_name)
#     li.append(salary)
#     li.append(expertise)
#     emplist.append(li)

# print(emplist)

# find_emp = input("Find Employee: ")

# find = False
# for i in range(emplist):
#     if isinstance(emplist[i], list):
#         if find_emp in emplist[i]:
#             print("find")
#             find = True
#             break

# if not find:
#     print("Not found")


# # 44.	Create a list by taking any 5 inputs from the user.

# roll_no = int(input("Stu Roll No: "))
# stu_name = input("Stu Name: ")
# address = input("Enter Address: ")
# clg_name = input("Enter College: ")
# course = input("Enter Course: ")

# stu = []
# stu.append(roll_no)
# stu.append(stu_name)
# stu.append(address)
# stu.append(clg_name)
# stu.append(course)

# print(stu)

# # 45.	Display the students from L1 list, whose name contains the character ‘a’.

# contains_a = [slice(i)for i in l1 if i == 'a']


# # 46.	Create a list of 10 numbers and find the total of odd numbers and even numbers
# # 47.	Put all the odd numbers in one list and even numbers in another list.

# integers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]


# even = [i for i in integers if i % 2 == 0]
# odd = [i for i in integers if i % 2 == 1]

# print(even, "Count: ", len(even))
# print(odd, "Count: ", len(odd))


# # 48.	Create a list having mixed elements like string and integers. Print only integer elements from the list with and without using list comprehension

list_mix = [1, "Rahul", 2, 3, 4, "Raj"]

only_ints = [i for i in list_mix if type(i) == int]

print("With list comprehension: ")
print(only_ints)

print("Without list comprehension: ")
for i in list_mix:
    if type(i) == int:
        print(i)
        


# 49.	Write a Python program to store student roll numbers in a set and prepare the sets according to the requirement of the question

roll_nos = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

# a.	Write a program to add new students to an existing class attendance set.

attandance = {1, 2, 3, 4, 5, 6, 7}

# b.	Write a program to remove students who are absent from the attendance set.

absent = roll_nos - attandance

print(absent)

# 50.	 Create a sets of Courses and write a program to check whether a given student is enrolled in a particular course or not.

courses = set(["MCA", "MBA", "BCA", "BBA"])




# a.	Write a program to find students who are enrolled in both the courses. 

# 51.	Create two sets of elective subjects chosen by the students. Write a program to find students who are enrolled in at least one of two elective subjects

# a.	Write a program to find students who are enrolled only in Course A and not in Course B.

# b.	Write a program to find students who 
