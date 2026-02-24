    # -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

# # UNIT -2
# # Program Control Flow and Python Data Structures
# # 1.	Find the minimum and maximum of 2 numbers

# num1 = 10
# num2 = 5

# if num1 > num2:
#     print(num1, "is Max")
#     print(num2, "is Min")
# else:
#     print(num2, "is Max")
#     print(num1, "is Min")

# # 2.	Write a program to find the maximum of three numbers

# a = 10
# b = 25
# c = 15

# if a >= b and a >= c:
#     print("The maximum number is:", a)
# elif b >= a and b >= c:
#     print("The maximum number is:", b)
# else:
#     print("The maximum number is:", c)


# # 3.	Write a program to input the basic salary and calculate the net salary based on the given conditions. If basic is <10000 then da=25%, hra=5%. If basic>=10000 and basic <=30000 then da=35%, hra=10%. If basic >30000 then da=40%, hra=20%. Pf is same for all 12%.

# basic = float(input("Enter basic salary: "))

# if basic < 10000:
#     da = basic * 0.25
#     hra = basic * 0.05
# elif basic >= 10000 and basic <= 30000:
#     da = basic * 0.35
#     hra = basic * 0.10
# else:
#     da = basic * 0.40
#     hra = basic * 0.20

# pf = basic * 0.12
# net_salary = basic + da + hra - pf

# print("DA:", da)
# print("HRA:", hra)
# print("PF:", pf)
# print("Net Salary:", net_salary)

# # 4.	Print 1 to 10 numbers in ascending and descending order using range 

# print("Ascending order:")
# for i in range(1, 11):
#     print(i)

# print("Descending order:")
# for i in range(10, 0, -1):
#     print(i)

# # 5.	Print odd numbers between 1 to 50

# print("Odd numbers between 1 to 50:")
# for i in range(1, 51):
#     if i % 2 == 1:
#         print(i)

# # 6.	Print the ‘*’ patterns using range()

# for i in range(1, 6):
#     print("*" * i)

# # 7.	Print the number pyramid using range()


# # 8.	Print all prime numbers between 10 to 50

# print("Prime numbers between 10 to 50:")
# for num in range(10, 51):
#     if num > 1:
#         is_prime = True
#         for i in range(2, num):
#             if num % i == 0:
#                 is_prime = False
#                 break
#         if is_prime:
#             print(num)

# # 9.	Take 10 numbers (min 3 digits) as user input and check whether a number is palindrome or not.

# for i in range(10):
#     num = int(input("Enter a number (min 3 digits): "))
#     temp = num
#     reverse = 0
#     while temp > 0:
#         digit = temp % 10
#         reverse = reverse * 10 + digit
#         temp = temp // 10

#     if num == reverse:
#         print(num, "is a palindrome")
#     else:
#         print(num, "is not a palindrome")


# # 10.	WAP to check whether the given number is Armstrong or not.


# num = int(input("Enter a number to check Armstrong: "))
# temp = num
# sum = 0
# digits = len(str(num))

# while temp > 0:
#     digit = temp % 10
#     sum = sum + (digit ** digits) # '**' means exponentiation
#     temp = temp // 10

# if num == sum:
#     print(num, "is an Armstrong number")
# else:
#     print(num, "is not an Armstrong number")


# # 11.	WAP to input n numbers and count the total number of odd and even numbers in the tuple.

# n = int(input("How many numbers? "))
# numbers = []

# for i in range(n):
#     num = int(input("Enter number: "))
#     numbers.append(num)

# t = tuple(numbers)
# odd = even = 0

# for num in t:
#     if num % 2 == 0:
#         even += 1
#     else:
#         odd += 1

# print("Total odd numbers:", odd)
# print("Total even numbers:", even)

# 12.	Print multiple lines using single print statement. as – 
#                      I like “Python Programming” very much
#                      It is my favorite subject

# str = "I like \"Python Programming\" very much \nIt is my favorite subject"
# print(str)

# # 13.	Print a part of the above string “very much” using the slice operator. 

# print(str[28:38])

# # 14.	Print the last 5 characters from the above given string

# print(str[-5:])

# # 15.	Print only the second line of the given string

# new_str = str.split('\n')
# print(new_str[1])

# # 16.	Take two strings as input from the user and concatenate them.

# fistName = input("Enter Your fistname: ")
# lastName = input("Enter Your lastname: ")
# print (fistName + " " + lastName)


# # 17.	Take a number and a string from the user and repeat the string for that many times.

# num = int(input("Enter a number: "))
# string = input("Enter a string: ")
# print(string * num)


# # 18.	Take an input character from the user and check whether that character is present in the above given string or not. – Using ‘in’ operator and using ‘not in’ operator

# string = input("Enter a string: ")

# char = input("Enter a character for search: ")

# if char in string:
#     print(char, "is present")
# else:
#     print(char, "is not present")

# if char not in string:
#     print(char, "is not in the string")
# else:
#     print(char, "is in the string")


# # 19.	Create a menu driven program for string manipulation
# # a.	Find the length of a string
# # b.	Print the string in upper case
# # c.	Print the string in lower case
# # d.	Print the string with initial capital
# # e.	Split the string based on the character entered.


# string = input("Enter a string: ")

# while True:
#     print("\n--- Menu ---")
#     print("a. Find length")
#     print("b. Upper case")
#     print("c. Lower case")
#     print("d. Initial capital")
#     print("e. Split string")
#     print("f. Exit")

#     choice = input("Enter your choice: ")

#     if choice == 'a':
#         print("Length:", len(string))
#     elif choice == 'b':
#         print("Upper case:", string.upper())
#     elif choice == 'c':
#         print("Lower case:", string.lower())
#     elif choice == 'd':
#         print("Initial capital:", string.title())
#     elif choice == 'e':
#         char = input("Enter character to split: ")
#         print("Split result:", string.split(char))
#     elif choice == 'f':
#         break
#     else:
#         print("Invalid choice")

# # 20.	Take two strings as input s1 and s2 and check whether s2 is present in s1 or not.

# s1 = input("Enter first string: ")
# s2 = input("Enter second string: ")

# if s2 in s1:
#     print(s2, "is present in", s1)
# else:
#     print(s2, "is not present in", s1)


# # 21.	If s2 is a part of s1 then print the 1st and last occurrences of it 

# if s2 in s1:
#     first = s1.find(s2)
#     last = s1.rfind(s2)
#     print("First occurrence position:", first)
#     print("Last occurrence position:", last)


# # 22.	If s2 is present in s1 then also count number of times it occurs in s1.

# if s2 in s1:
#     count = s1.count(s2)
#     print(s2, "occurs", count, "times in", s1)


# # 23.	Count total number of words in the string input by user 

# str = input("Enter a string: ")
# print(len(str.split()))

# # 24.	Take a string input from user and print it in reverse using range 

# reversed=""
# str = input("Enter a string: ")
# for i in range(len(str)-1, -1, -1):
#     reversed += str[i]
# print(reversed)

# # 25.	Take a tuple input and print all the elements of it in reverse sequence
# t1 = eval(input("Enter Tuple:"))

# for i in reversed(t1):
#     print(i)
    
# print(type(t1))

        
# # 26.	Copy the inputted string to another string by replacing the character ‘o’ with ‘@’ Eg. ‘Hello’ will be copied to another string as ‘Hell@’ and ‘Good Morning’ will become ‘G@@d M@rning’ (Without using replace())

# string = input("Enter String: ")

# new_str = ""

# for i in string:
#     if i == 'o' or i == 'O':
#         new_str += '@'
#     else:
#         new_str += i

# print("Original string:", string)
# print("New string:", new_str)


# # 27.	Take a string as an input from the user. Find total number of vowels in it. (Hint: take a tuple of vowels)

# string2 = input("Enter String: ")

# vowels = ('a','e','i','o','u')

# count = 0
# for char in string2:
#    if char in vowels:
#       count += 1

# print("Total vowels:", count)

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
                                                                                 

# flag = False
# for item in t3:
#     if num in item:
#         flag = True
#         break

# if flag:
#     print("Yes, number is present in t3")
# else:
#     print("No, number is not present in t3")


# # 33.	Create a tuple of 5 fruits. Ask the user to input a fruit name and search that name in the given fruit tuple. Display suitable messages

# fruits = ("Apple", "Banana", "Mango", "Orange", "Grape")
# search_fruit = input("Enter a fruit name for finding it in tuple: ")

# if search_fruit in fruits:
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
# print(t4)

# # 37.	Find an element in the nested tuple (t4) and print its position if found, otherwise print “Not found”

# find_val = input("Enter element to find in t4: ")

# flag = False
# for i in range(len(t4)):
#     if t4[i] == find_val:
#         print(f"Found at position: {i}")
#         flag = True
#     elif isinstance(t4[i], tuple):
#         if find_val in t4[i]:
#             print("Found at position:", i, "(inside sub-tuple index:", t4[i].index(find_val),")")
#             flag = True
# if not flag:
#     print("Not found")


# # 38.	Take a tuple of 10 integer numbers and segregate odd and even numbers in 2 different tuples.

# numbers = (1, 2, 3, 4, 5, 6, 7, 8, 9, 10)

# odd_list = []
# even_list = []

# for num in numbers:
#     if num % 2 == 0:
#         even_list.append(num)
#     else:
#         odd_list.append(num)

# odd_tuple = tuple(odd_list)
# even_tuple = tuple(even_list)

# print("Odd numbers:", odd_tuple)
# print("Even numbers:", even_tuple)

# # 39.	Create a list of students say L1

# l1 = ["Rahul", "Rahul", "Raj", "Prashant", "Kartik", "Kush"]
# print(l1)

# # a.	Count total number of students from the list L1

# print(len(l1))

# # b.	Add one more student in the list L1

# l1.append("Meet")
# print(l1)

# # c.	Display all the students in the sorted order

# l1.sort()
# print(l1)

# # d.	Check a particular student’s name is present in the list or not

# name = "Rahul"

# if name in l1:
#     print(name, "is present in list")
# else:
#     print(name, "is Not present in list")
    
# # e.	If the student’s name is present in the list, print total number of same name students in the list L1 and display the position of 1st student

# if name in l1:
#     print(name, "is repeated ", l1.count(name), "times at position",  l1.index(name))
# else:
#     print(name, "is Not present in list")

# # f.	Remove the last student from the list L1

# print(l1[-1:])
# print(l1.pop())

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

# print("Maximum:", max(no))
# print("Minimum:", min(no))

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

# l1 = ["Rahul", "Rahul", "Raj", "Prashant", "Kartik", "Kush"]

# print("Students with 'a' in name:")
# for name in l1:
#     if 'a' in name:
#         print(name)

# # 46.	Create a list of 10 numbers and find the total of odd numbers and even numbers

# nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

# odd_total = 0
# even_total = 0

# for num in nums:
#     if num % 2 == 0:
#         even_total += num
#     else:
#         odd_total += num

# print("Total of odd numbers:", odd_total)
# print("Total of even numbers:", even_total)

# # 47.	Put all the odd numbers in one list and even numbers in another list.

# integers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]


# even = [i for i in integers if i % 2 == 0]
# odd = [i for i in integers if i % 2 == 1]

# print(even, "Count: ", len(even))
# print(odd, "Count: ", len(odd))


# # 48.	Create a list having mixed elements like string and integers. Print only integer elements from the list with and without using list comprehension

# list_mix = [1, "Rahul", 2, 3, 4, "Raj"]

# print("With list comprehension: ")
# only_ints = [i for i in list_mix if type(i) == int]
# print(only_ints)

# print("Without list comprehension: ")
# for i in list_mix:
#     if type(i) == int:
#         print(i)
        

# # 49.	Write a Python program to store student roll numbers in a set and prepare the sets according to the requirement of the question

# roll_nos = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

# # a.	Write a program to add new students to an existing class attendance set.

# attandance = {1, 2, 3, 4, 5, 6, 7}
# print(attandance)

# new_student = int(input("Enter roll number to add: "))
# attandance.add(new_student)
# print("Updated attendance:", attandance)

# # b.	Write a program to remove students who are absent from the attendance set.

# absent = set([7,13])

# attandance = attandance - absent
# print("After removing absent students:", attandance)

# # 50.	 Create a sets of Courses and write a program to check whether a given student is enrolled in a particular course or not.
# # a.	Write a program to find students who are enrolled in both the courses. 

# ai = {1, 2, 3, 4}
# ml = {2, 3, 4, 5}

# roll = int(input("Enter roll number to check: "))
# if roll in ai:
#     print("Roll", roll, "present in AI course")
# else:
#     print("Roll", roll, "not present in AI course")
    
# print("Students enrolled in both AI and ML:", ai & ml)


# # 51.	Create two sets of elective subjects chosen by the students. Write a program to find students who are enrolled in at least one of two elective subjects
# # a.	Write a program to find students who are enrolled only in Course A and not in Course B.
# # b.	Write a program to find students who participated in exactly one of two courses.
# # c.	Write a program to remove duplicate student from course sets.

# a = {1, 2, 3, 4, 5, 8, 9, 10, 11}
# b = {6, 7, 10, 11, 12}

# print("Students in at least one course:", a | b)
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

# print("Enrolled in both subject: ", math_students & cs_students)

# # 54.	Given the sets

# club_A = {"Rahul", "Sneha", "Amit"}
# club_B = {"Sneha", "Karan", "Pooja"}

# # write a program to find students who are members of at least one club.

# print("Members of atleast one cloub: ", club_A | club_B)

# # 55.	Given the sets

# course_A = {"Amit", "Neha", "Riya", "Karan"}
# course_B = {"Neha", "Karan"}

# # write a program to find students enrolled only in Course A.

# print("Enrolled only in Course A: ", club_A - club_B)

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

# if team1.isdisjoint(team2):
#     print("Teams are disjoint")
# else:
#     print("Teams are not disjoint")

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

# emp = {1: "Rahul", 2: "prsahant", 3:"hardik"}

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

nums = []
for i in range(5): 
    num = int(input("Enter number: ")) 
    nums.append(num)

print("Before sorting:", nums)

n = len(nums)

for i in range(n - 1):
    for j in range(n - i - 1):
        if nums[j] > nums[j + 1]:
            nums[j], nums[j + 1] = nums[j + 1], nums[j]

print("After sorting:", nums)