# -*- coding: utf-8 -*-
"""
Created on Mon Mar 23 10:23:51 2026

@author: mcaa250003
"""

# UNIT -4
# Exception Handling Database Connectivity
# 1.	Write a Python script to take a user input to enter a list of elements for employee data and write it into a file. Handle the following exceptions for it.


# NOTE: 
# •	TypeError: This exception is raised when an operation or function is applied to an object of the wrong type, such as adding a string to an integer.
# •	NameError: This exception is raised when a variable or function name is not found in the current scope.
# •	IndexError: This exception is raised when an index is out of range for a list, tuple, or other sequence types.
# •	KeyError: This exception is raised when a key is not found in a dictionary.
# •	ValueError: This exception is raised when a function or method is called with an invalid argument or input, such as trying to convert a string to an integer when the string does not represent a valid integer.
# •	AttributeError: This exception is raised when an attribute or method is not found on an object, such as trying to access a non-existent attribute of a class instance.
# •	IOError: This exception is raised when an I/O operation, such as reading or writing a file, fails due to an input/output error.
# •	ZeroDivisionError: This exception is raised when an attempt is made to divide a number by zero.
# ImportError: This exception is raised when an import statement fails to find or load a module.

class AgeException(Exception):
    def __init__(self, args):
        self.msg = args



try:
    listEmp = []

    for i in range(1):
        name = input("Enter Name: ")
        salary = int(input("Enter Salary: "))
        
        assert salary >= 10000
            
        age = int(input("Enter Age: "))
        
        if age <= 18 or age >= 25:
            raise AgeException("Invalid Age")
            
        hra = salary + 600 
        
        
        listEmp.append(name)
        listEmp.append(salary)
        listEmp.append(age)
        
        print(listEmp)
        
        fileStore = str(name) + "," + str(salary) + "," + str(age) + "," + str(hra) + "\n"
        
        # f.	Open a file in read mode and try to write into it
        # g.	Try to write the whole list object into a file

        with open("D:\\emp.txt", "a+") as file:
            file.write(fileStore)
        


# a.	If an age entered is not a number

except ValueError:
    print("It must be Integer")
        
# b.	If salary is not defined and trying to append in the list

# c.	Entered age must be between 18 and 25 only

except AgeException as obj:
    print(obj)

# d.	Salary must be greater than or equal to 10000

except AssertionError:
    print("Salary must be grater than 10000")

# e.	Calculate HRA and check for the ZeroDivisionError
except ZeroDivisionError:
    print("Divide by Zero")

            

            


# 2.	Create a dictionary object for student details (Rollno, name, age, hobby, marks…)
# 3.	 Create a user defined exception if entered marks are > 50
# 4.	Store all those dictionary data in a binary file.
# 5.	Create separate functions for addData, updateData, deleteData from the binary file
# Essential Assignment:
# 1.	Create a Database in MySQL – name MyDB
# 2.	Create a table – employee having fields – eno, ename, age, salary, doj
# 3.	Insert, update and delete specific rows in that table using python script
# 4.	Create a menu driven CRUD operation program to perform above tasks.

# Help:
# mysql.connector module
# db = connector.connect(host=”localhost”,user=”root”,password=””, database=”myDB”)
# cur = db.cursor()
# cur.execute()
# row = cur.fetchall()
# cur.executemany()
# db.commit()
# 5.	Create a MySQL database table called Tournament. Use exception handling while creating a database table.
# 6.	Insert the records from the readymade text file.
# 7.	Use exception handling while opening and reading the text file.
# 8.	Separate Text files for each sport contains Players details like (name, age, no_of_Tournaments_Played)
# 9.	There should be only one DB table for all sports players, having fields like
# Name, Age, Sport_Play, Tournaments
# 10.	After inserting data in the table, write a menu driven program to 
# a.	Search sport wise no. of players, Tournament wise players list 
# b.	Update the tournament field (increment by 1) for a user specified player (when he has played match)
# 11.	Take the DB table backup in the binary file. (Use Pickle.dump())




