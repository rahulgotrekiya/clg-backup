    # -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

# UNIT -2
# Program Control Flow and Python Data Structures
# 1.	Find the minimum and maximum of 2 numbers
# 2.	Write a program to find the maximum of three numbers
# 3.	Write a program to input the basic salary and calculate the net salary based on the given conditions. If basic is <10000 then da=25%, hra=5%. If basic>=10000 and basic <=30000 then da=35%, hra=10%. If basic >30000 then da=40%, hra=20%. Pf is same for all 12%.
# 4.	Print 1 to 10 numbers in ascending and descending order using range 
# 5.	Print odd numbers between 1 to 50
# 6.	Print the ‘*’ patterns using range()
# 7.	Print the number pyramid using range()
# 8.	Print all prime numbers between 10 to 50
# 9.	Take 10 numbers (min 3 digits) as user input and check whether a number is palindrome or not.
# 10.	WAP to check whether the given number is Armstrong or not.
# 11.	WAP to input n numbers and count the total number of odd and even numbers in the tuple.
# 12.	Print multiple lines using single print statement. as – 
#                      I like “Python Programming” very much
#                      It is my favorite subject
# 13.	Print a part of the above string “very much” using the slice operator. 
# 14.	Print the last 5 characters from the above given string
# 15.	Print only the second line of the given string
# 16.	Take two strings as input from the user and concatenate them.
# 17.	Take a number and a string from the user and repeat the string for that many times.
# 18.	Take an input character from the user and check whether that character is present in the above given string or not. – Using ‘in’ operator and using ‘not in’ operator
# 19.	Create a menu driven program for string manipulation
# a.	Find the length of a string
# b.	Print the string in upper case
# c.	Print the string in lower case
# d.	Print the string with initial capital
# e.	Split the string based on the character entered.
# 20.	Take two strings as input s1 and s2 and check whether s2 is present in s1 or not.
# 21.	If s2 is a part of s1 then print the 1st and last occurrences of it 
# 22.	If s2 is present in s1 then also count number of times it occurs in s1.
# 23.	Count total number of words in the string input by user 
# 24.	Take a string input from user and print it in reverse using range 

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



# # 36.	Create a nested tuple t4 of your (name, (hobbies), (friends), degree)
# t4 = ("Raj", ("Coding", "Reading"), ("Amit", "Sita"), "B.Tech")

# # 37.	Find an element in the nested tuple (t4) and print its position if found, otherwise print “Not found”

# find_val = input("Enter element to find in t4: ")
# flag = False
# for i in range(len(t4)):
#     if t4[i] == find_val:
#         print(f"Found at position: {i}")
#         flag = True
#     elif isinstance(t4[i], tuple):
#         if flag in t4[i]:
#             print(f"Found at position: {i} (inside sub-tuple index {t4[i].index(find_val)})")
#             flag = True
# if not flag:
#     print("Not found")


# 38.	Take a tuple of 10 integer numbers and segregate odd and even numbers in 2 different tuples.




# # 39.	Create a list of students say L1

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

# list_mix = [1, "Rahul", 2, 3, 4, "Raj"]

# only_ints = [i for i in list_mix if type(i) == int]

# print("With list comprehension: ")
# print(only_ints)

# print("Without list comprehension: ")
# for i in list_mix:
#     if type(i) == int:
#         print(i)
        


# # 49.	Write a Python program to store student roll numbers in a set and prepare the sets according to the requirement of the question

# roll_nos = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

# # a.	Write a program to add new students to an existing class attendance set.

# attandance = ([1, 2, 3, 4, 5, 6, 7)]

# # b.	Write a program to remove students who are absent from the attendance set.

# absent = set([7,13])

# print(absent)

# # 50.	 Create a sets of Courses and write a program to check whether a given student is enrolled in a particular course or not.
# # a.	Write a program to find students who are enrolled in both the courses. 

# ai = {1, 2, 3, 4}
# ml = {2, 3, 4, 5}

# if 2 in ai:
#     print("Roll 2 present in AI course")
# print("student enroll in both ai na ml", ai & ml)

# # 51.	Create two sets of elective subjects chosen by the students. Write a program to find students who are enrolled in at least one of two elective subjects
# # a.	Write a program to find students who are enrolled only in Course A and not in Course B.
# # b.	Write a program to find students who participated in exactly one of two courses.
# # c.	Write a program to remove duplicate student from course sets.

# a = {1, 2, 3, 4, 5, 8, 9, 10, 11}
# b = {6, 7, 10, 11, 12}

# print("Only Course A: ", a-b)
# print("Only 1 Course: ", a^b)

# remove = a&b
# a = a-remove
# b = b-remove

# print("New A:", a)
# print("New B:", b)

# # 52.	Given the set
# students = {"Amit", "Neha", "Riya", "Karan"}

# # write a Python program to check whether "Riya" is enrolled in the course.

# if "Riya" in students:
#     print("Priya is enrolled")
# else:    
#     print("Priya is enrolled")

# # 53.	Given the sets
# math_students = {"Amit", "Neha", "Riya"}
# cs_students = {"Riya", "Karan", "Pooja"}

# # write a program to find students enrolled in both subjects.

# print("Enrolled in both subject: ", math_students&cs_students)

# # 54.	Given the sets
# club_A = {"Rahul", "Sneha", "Amit"}
# club_B = {"Sneha", "Karan", "Pooja"}

# # write a program to find students who are members of at least one club.

# print("Members of atleast one cloub: ", club_A^club_B)
# # 55.	Given the sets
# course_A = {"Amit", "Neha", "Riya", "Karan"}
# course_B = {"Neha", "Karan"}

# # write a program to find students enrolled only in Course A.

# print("Enrolled only in Course A: ", club_A-club_B)

# # 56.	Given the sets
# workshop1 = {"Amit", "Riya", "Pooja"}
# workshop2 = {"Riya", "Karan", "Neha"}

# # write a program to find students who attended exactly one workshop.

# exactlyone = workshop1 ^ workshop2

# print("Students who attended exacly one workshop: ", exactlyone)

# # 57.	Given the set
# attendance = {"Amit", "Neha", "Riya", "Karan"}

# # write a program to remove "Neha" from the attendance list.

# attendance.remove("Neha")

# print(attendance)

# # 58.	Given the set
# present_students = {"Ravi", "Sneha", "Amit"}
# # write a program to display all students using a loop.

# for stu in present_students:
#     print(stu)

# # 59.	Given the list
# emails = ["a@gmail.com", "b@gmail.com", "a@gmail.com", "c@gmail.com"]

# # write a program to remove duplicate email IDs using a set.

# unique = set(emails)

# print(unique)

# # 60.	Given the sets
# class_A = {"Amit", "Neha"}
# class_B = {"Amit", "Neha", "Riya", "Karan"}

# # write a program to check whether Class A is a subset of Class B.

# c = a & b
# if c == b:
#     print("Subset")
# else:
#     print("not Subset")
    
# flag = True
# for i in class_B:
#     if i not in class_A:
#         flag = False
#         break

# if flag == True:
#     print("Subset")
# else:
#     print("Not subset")
    
# # 61.	Given the sets
# team1 = {"Amit", "Riya"}
# team2 = {"Karan", "Neha"}

# # write a program to check whether the two teams are disjoint.

# flag = True
# for i in team1:
#     if i in team2:
#         flag = False
#         break

# if flag == True:
#     print("disjoint")
# else:
#     print("Not disjoint")   

# # 62.	Create a dictionary of employees where empId will be the key and value will be the name of an employee

emp = {1: "Rahul", 2: "prsahant", 3:"hardik"}

# # 1.	Display how many employees are there in the dictionary.

# print("Total employees:", len(emp))

# # 2.	Display all empID and add them in a separate list.

# print(emp.keys())
# emp_keys = list(emp.keys())
# print(emp_keys)

# # 3.	Display all employee names and take them to a separate list

# print(emp.values())
# emp_vals = list(emp.values())
# print(emp_vals)

# # 4.	Take an empId from the user and check if that employee is there in the dictionary or not.

# empId = input("Enter empId to check: ")

# if empId  in emp.keys():
#     print("Yes the emp is in dictionary")
# else:
#     print("No the emp is not in dictionary")

# # 5.	If an empID is there in the dictionary then display the name of that employee or if not available then add an ID and Name of the employee in the dictionary

# if empId  in emp.keys():
#     print("Name of employee: ", emp[empId])
# else:
#     new_emp = input("Enter name of emo to add in dictionary: ")
#     emp[empId] = new_emp
    
# print(emp)

# 6.	Change the name of the employee of empID taken by the user
# empId = int(input("Enter empId to change the name of emp: "))

# print(emp)

# if empId in emp.keys():
#     new_emp = input("Enter New name of emp: ")
#     emp[empId] = new_emp
# else:
#     print("Emp not found in emp dictionary: ")

# print(emp)

# # 7.	Remove an employee whose ID is provided by the user

# empId = int(input("Enter empId to change the name of emp: "))

# print("before delete:", emp)

# if empId in emp.keys():
#     print(emp.pop(empId))
# else:
#     print("Emp not found in emp dictionary")

# print("after delete:", emp)

# # 63.	  Take 5 names of students as an input from the user and create a dictionary with keys as their initials and value is a list as [age, degree, favorite subject] 

# stu = {}
# for i in range(2):
#     name = input("Enter Name: ")

#     age = int(input("Age: "))
#     degree = input("Degree: ")
#     fav_sub = input("Favorite subject: ")
    
#     stu[name[0]] = [age, degree, fav_sub]

# print(stu)

# # 1.	Display the youngest student from the above dictionary.

# m=99999
# for x in stu:
#     l=stu[x]
#     # print(l)
#     if(m > l[0]):
#         m=l[0]
#         k = x
# print(stu[k], "is Youngest")
    
# # 2.	Create a dictionary of students having rollno of the student is as key and value is a list of marks obtained by that student in 5 subjects

# students = {
#     1: [90, 90, 90, 90, 90],
#     2: [21, 22, 23, 44, 55],
#     3: [21, 22, 23, 44, 55],
#     4: [21, 22, 23, 44, 55],
# }

# # # 3.	Create a dictionary from the above one, where key is rollno and value is (total of all subjects, percentage and grade ) a tuple of his result

# tmp={}
# for i in students:
#     l=students[i]
#     sub=len(students[i])
#     total=0
#     for j in l:
#         total+=j
#         per = total/sub
        
#     if per >= 90 and per <= 100:
#         grade='A+'        
#     elif per >= 75 and per <=90:
#         grade='A'
#     elif per >=50 and per <=75:
#         grade='B'
#     elif per >=33 and per <=50:
#         grade='C'
#     elif per <=33:
#         grade='Faill'
#     else:
#         grade='unvalid'
    
#     tmp[i] = (total, per, grade)
# print(tmp)

# # 4.	Display the rollno who has scored highest marks (total)

# maxTotal = 0;
# roll =0
# for i in tmp:
#     l=tmp[i]
#     if l[0] > maxTotal:
#         maxTotal = l[0]
#         roll = i

# print("Rollno", roll, "Having highest", maxTotal, "marks.")
        
# 5.	Take 10 numbers from the user and create a list, apply bubble sort and arrange the elements in the list.

nums=[]
for i in range(3): 
    num = int(input("Enter number:")) 
    nums.append(num)

print(nums)

totals = len(nums)

for i in range(totals - 1):
    for j in range(totals-i-1):
        if num[j] > num[i]:
            temp=nums[j]
            nums[j]=nums[i]
            nums[i]=temp
print(num)