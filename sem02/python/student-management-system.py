# -*- coding: utf-8 -*-
"""
Created on Wed Mar 25 13:35:49 2026

@author: mcaa250003
"""

# Menu-Driven Program
# ----- Student Management System -----
# 1. Add Student
# 2. View All Students
# 3. Search Student by Roll No
# 4. Update Student Details
# 5. Delete Student
# 6. Display Topper
# 7. Count Total Students
# 8. Exit
# Enter your choice:

# Table Name: students
# Field Name	Type
# roll_no	INT (PK)
# name	VARCHAR
# marks	FLOAT
# grade	VARCHAR
# Functional Requirements
# 1. Add Student
# •	Input: Roll No, Name, Marks 
# •	Automatically calculate grade: 
# o	A (≥75), B (60–74), C (50–59), F (<50) 
# •	Insert data into database
# View All Students
# •	Fetch and display all records from database
# Search Student
# •	Search by Roll No 
# •	Display student Update Student
# •	Update name or marks 
# •	Recalculate grade automatically
# Display Topper
# •	Show student with highest marks
# Count Students
# •	Display total number of students
# Tasks
# •  Validate input (no duplicate roll number) 
# •  Use Prepared Statements / Parameterized queries 
# •  Add sorting (by marks or name) 
# •  Export data to a file

# Can use mysql.connector.errors.IntegrityError exception for checking repletion of roll numbers


import mysql.connector
conn = mysql.connector.connect(
    host = 'localhost',
    port = '3309',
    user = 'root',
    password = '',
    database = 'stu-mgnt'    
)


c = conn.cursor()

create_table = 'create table students(roll_no INT(3) NOT NULL PRIMARY KEY, name VARCHAR(255), marks FLOAT, grade VARCHAR(2))'

# c.execute(create_table)

def clac_grade(marks):
    # o	A (≥75), B (60–74), C (50–59), F (<50) 
    if marks >= 75:
        return 'A'
    elif marks >= 60 and marks <= 74:
        return 'B'
    elif marks >= 50 and marks <= 59:
        return 'C'
    elif marks < 50:
        return 'F'
        

def student_exist(roll_no):
    find = f'select * from students where roll_no={roll_no}'
    
    if find!=[]:
        return 1
    else:
        return 0

def add_student(roll_no, name, marks):
    
    grade = clac_grade(marks)
    
    print(name, "'s grade is:", grade)
            
    query = f'insert into students(roll_no, name, marks, grade) values({roll_no}, {name}, {marks}, {grade})'
    c.execute(query)
    
    print("Data inserted !!!")
    
    conn.commit()

def display():    
    query = 'select * from students'
    c.execute(query)
    
    rows = c.fetchall()
    for row  in rows:
        print(row)

def search_student(roll_no):    
    query = f'select * from students where roll_no ={roll_no}'
    c.execute(query)
    
    student = c.fetchall()
    print(student)
    
def update_student(roll_no):        
    name = input("Enter Name: ")
    marks = eval(input("Enter Marks: "))
    
    grade = clac_grade(marks)
    
    query = f'update students set name={name}, marks={marks}, grade={grade} where roll_no={roll_no}'
    c.execute(query)
    
    print("Data Updated!!!")

    conn.commit()
    
def delete_student(roll_no):
    query = f'delete from students where roll_no={roll_no}'
    
    if c.execute(query):
        print("Student Deleted !!!")
        conn.commit()
    else: 
        print("Student Deleted !!!")
        

def topper():
    query = 'select * from students where marks=(select max(marks) from students)'
    c.execute(query)
    
    rows = c.fetchall()
    for row  in rows:
        print(row)

def count():
    query = 'select count(roll_no) as total_students from students'
    c.execute(query)
    
    rows = c.fetchall()
    print(f'Total students: {rows[0][0]}')
        
        
while True:
    print("\n\n----- Student Management System -----")
    print("1. Add Student")
    print("2. View All Students")
    print("3. Search Student by Roll No")
    print("4. Update Student Details")
    print("5. Delete Student")
    print("6. Display Topper")
    print("7. Count Total Students")
    print("8. Exit")

    ch = int(input("Enter Your Choice: "))
    
    if ch == 1:
        roll_no = int(input("Enter Roll No: "))
        
        if student_exist(roll_no):
            print('User already Exsist')
        else:
            name = input("Enter Name: ")
            marks = eval(input("Enter Marks: "))
            
            add_student(roll_no, name, marks)
    
    elif ch == 2:
        display()
    
    elif ch == 3:
        roll_no = int(input("Enter RollNo to find: "))
        search_student(roll_no)
    
    elif ch == 4:
        display();
        roll_no = int(input("Enter RollNo to find: "))
        update_student(roll_no)
    
    elif ch == 5:
        display();
        roll_no = int(input("Enter RollNo to find: "))
    
        delete_student(roll_no)
    
    elif ch == 6:
        topper()
    
    elif ch == 7:
        count()
    
    elif ch == 8:
        break
        
    elif ch == 0:
        break
    else:
        print("Invalid Choice!")
    
conn.close()