# -*- coding: utf-8 -*-
"""
Created on Sun Feb  15 11:42:10 2026

@author: rahulgotrekiya
"""

# MCA PYTHON PRACTICE QUESTIONS

# Q-1 Write a Python program that accepts a string from the user and performs the following operations:
# Display the string in reverse order.
# Count the number of vowels and consonants in the string.
# Check whether the string is a palindrome.
# Replace all vowels in the string with * and display the modified string.

str1 = input("Enter a string: ")

# Display the string in reverse order.
reverse_str = str1[::-1]

print("Reverse string:", reverse_str)

# Count the number of vowels and consonants in the string.

vowels = ['a','e','i','o','u','A','E','I','O','U']
vowel_list = []
consonant_list = []

for ch in str1:
    if ch in vowels:
        vowel_list.append(ch)
    else:
        consonant_list.append(ch)

print("Vowels:", vowel_list)
print("Consonants:", consonant_list)

print("Number of vowels =", len(vowel_list))
print("Number of consonants =", len(consonant_list))

# Check whether the string is palindrome
if str1 == reverse_str:
    print(str1, "is a palindrome")
else:
    print(str1, "is not a palindrome")

# Replace all vowels with *
new_str = ""
for char in str1:
    if char in vowels:
        new_str = new_str + "*"
    else:
        new_str = new_str + char

print("Modified string:", new_str)


# Q-2 Write a Python program to develop a Hotel Reservation System with the following requirements:
# Store details of N rooms using a list of dictionaries, where each room has: room number, room type, price per day, and availability status
# Display details of all available rooms
# Display room number and price as a tuple for rooms of a given room type
# Identify and display the room(s) having the maximum price per day.
# Allow booking of a room using room number and update the availability status

rooms = [
    {"room_no": 101, "room_type": "Single", "price": 1000, "available": True},
    {"room_no": 102, "room_type": "Double", "price": 1500, "available": True},
    {"room_no": 103, "room_type": "Single", "price": 1000, "available": False},
    {"room_no": 104, "room_type": "Suite", "price": 3000, "available": True},
    {"room_no": 105, "room_type": "Double", "price": 1500, "available": True}
]

# Display all available rooms
print("Available Rooms:")
for room in rooms:
    if room["available"] == True:
        print("Room No:", room["room_no"], "Type:", room["room_type"], "Price:", room["price"])

# Display room number and price as tuple for given room type
room_type = input("Enter room type to search: ")
print("Rooms of type", room_type)
for room in rooms:
    if room["room_type"] == room_type:
        t = (room["room_no"], room["price"])
        print(t)

# Find maximum price room
max_price = 0
for room in rooms:
    if room["price"] > max_price:
        max_price = room["price"]

print("Rooms with maximum price:")
for room in rooms:
    if room["price"] == max_price:
        print("Room No:", room["room_no"], "Type:", room["room_type"], "Price:", room["price"])

# Book a room
room_no = int(input("Enter room number to book: "))
for room in rooms:
    if room["room_no"] == room_no:
        if room["available"] == True:
            room["available"] = False
            print("Room", room_no, "booked successfully")
        else:
            print("Room", room_no, "is already booked")
        break

print("Updated room details:", rooms)


# Q-3 Write a python program to check whether the given number is prime or not? If prime then print the multiplication table of it.

num = int(input("Enter a number: "))

is_prime = True
if num <= 1:
    is_prime = False
else:
    for i in range(2, num):
        if num % i == 0:
            is_prime = False
            break

if is_prime:
    print(num, "is a prime number")
    print("Multiplication table of", num)
    for i in range(1, 11):
        print(num, "x", i, "=", num * i)
else:
    print(num, "is not a prime number")


# Q-4 Write a Python program that:
# Displays all the words present in the sentence
# Displays only the unique words
# Displays the count of unique words

sentence = input("Enter a sentence: ")

# Display all words
words = sentence.split()
print("All words:")
for word in words:
    print(word)

# Display unique words
unique_words = []
for word in words:
    if word not in unique_words:
        unique_words.append(word)

print("Unique words:")
for word in unique_words:
    print(word)

print("Count of unique words:", len(unique_words))


# Q-5 Write a Python program for a Library Management System with the following requirements:
# Accept details of N books, including book ID, book name, author name, category, and number of copies available
# Display all books belonging to a given category
# Identify and display the book(s) having the maximum available copies
# Display names of authors whose books have less than a given number of copies
# Allow issuing a book and update the availability accordingly
# Display the updated book details

books = []
n = int(input("Enter number of books: "))

for i in range(n):
    print("Enter details of book", i+1)
    book_id = int(input("Book ID: "))
    book_name = input("Book Name: ")
    author = input("Author Name: ")
    category = input("Category: ")
    copies = int(input("Number of copies: "))
    
    book = {"id": book_id, "name": book_name, "author": author, "category": category, "copies": copies}
    books.append(book)

# Display books of given category
cat = input("Enter category to search: ")
print("Books in category", cat)
for book in books:
    if book["category"] == cat:
        print("Book ID:", book["id"], "Name:", book["name"], "Author:", book["author"], "Copies:", book["copies"])

# Find maximum copies
max_copies = 0
for book in books:
    if book["copies"] > max_copies:
        max_copies = book["copies"]

print("Books with maximum copies:")
for book in books:
    if book["copies"] == max_copies:
        print("Book ID:", book["id"], "Name:", book["name"], "Copies:", book["copies"])

# Display authors with less than given copies
min_copies = int(input("Enter minimum copies: "))
print("Authors with books having less than", min_copies, "copies:")
for book in books:
    if book["copies"] < min_copies:
        print(book["author"])

# Issue a book
book_id = int(input("Enter book ID to issue: "))
for book in books:
    if book["id"] == book_id:
        if book["copies"] > 0:
            book["copies"] = book["copies"] - 1
            print("Book issued successfully")
        else:
            print("No copies available")
        break

# Display updated details
print("Updated book details:")
for book in books:
    print("ID:", book["id"], "Name:", book["name"], "Author:", book["author"], "Category:", book["category"], "Copies:", book["copies"])


# Q-6 Write a Python program that accepts a number from the user and checks whether it is a palindrome. If it is a palindrome, display numbers from 1 to that number; otherwise, display an appropriate message.
num = input("Enter a number: ")

if num == num[::-1]:
    print("Palindrome number")

    n = int(num)
    print("Numbers from 1 to", n)
    for i in range(1, n+1):
        print(i)
else:
    print("Not a palindrome number")

# Q-7 Write a program in python to enter the string. Perform the following tasks
# Count the number of times each word is repeated in the string
# Count the number of palindrome words
str1 = input("Enter a string: ")

words = str1.split()

print("Word repetition count:")

printed = []

for i in words:
    if i not in printed:
        count = 0
        for j in words:
            if i == j:
                count = count + 1
        print(i, ":", count)
        printed.append(i)

# Count the number of palindrome words
palindrome = 0

for w in words:
    rev = ""
    for ch in w:
        rev = ch + rev

    if w == rev:
        palindrome = palindrome + 1

print("Number of palindrome words:", palindrome)

# Q-8 Write a Python program to develop an Employee Management System with the following requirements:
# Store details of N employees using a suitable data structure (employee ID, name, department, basic salary)
# Calculate and display the gross salary of each employee
# Display details of employees having the highest gross salary
# Allow updating the salary of an employee using employee ID
# Count the number of employees in each department.

employees = []
n = int(input("Enter number of employees: "))

for i in range(n):
    print("Enter details of employee", i+1)
    emp_id = int(input("Employee ID: "))
    name = input("Name: ")
    dept = input("Department: ")
    basic = float(input("Basic Salary: "))
    
    emp = {"id": emp_id, "name": name, "dept": dept, "basic": basic}
    employees.append(emp)

print("Employee Gross Salary:")
for emp in employees:
    da = emp["basic"] * 0.40
    hra = emp["basic"] * 0.20
    gross = emp["basic"] + da + hra
    emp["gross"] = gross
    print("ID:", emp["id"], "Name:", emp["name"], "Gross Salary:", gross)

max_gross = 0
for emp in employees:
    if emp["gross"] > max_gross:
        max_gross = emp["gross"]

print("Employees with highest gross salary:")
for emp in employees:
    if emp["gross"] == max_gross:
        print("ID:", emp["id"], "Name:", emp["name"], "Gross:", emp["gross"])

emp_id = int(input("Enter employee ID to update salary: "))
for emp in employees:
    if emp["id"] == emp_id:
        new_salary = float(input("Enter new basic salary: "))
        emp["basic"] = new_salary
        print("Salary updated successfully")
        break

dept_count = {}
for emp in employees:
    if emp["dept"] in dept_count:
        dept_count[emp["dept"]] = dept_count[emp["dept"]] + 1
    else:
        dept_count[emp["dept"]] = 1

print("Employee count in each department:")
for dept in dept_count:
    print(dept, ":", dept_count[dept])


# Q-9 Write a program to input n 3 digit numbers from the user. Find the sum of the digits of each number and store it in dictionary.

n = int(input("Enter how many numbers: "))
digit_sum = {}

for i in range(n):
    num = int(input("Enter a 3 digit number: "))
    temp = num
    sum = 0
    
    while temp > 0:
        digit = temp % 10
        sum = sum + digit
        temp = temp // 10
    
    digit_sum[num] = sum

print("Dictionary of numbers and their digit sum:")
print(digit_sum)