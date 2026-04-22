# -*- coding: utf-8 -*-
"""
Created on Tue Mar 24 10:27:09 2026

@author: admin
"""

import mysql.connector

conn = mysql.connector.connect(
    host = 'localhost',
    port = '3309',
    user = 'root',
    password = '',
    database = 'python'
)

c = conn.cursor()

def display():    
    s = 'select * from employee'
    c.execute(s)
    
    rows = c.fetchall()
    for row  in rows:
        print(row)

def insert():  
    emp_name = input("Enter Emp Name: ")
    emp_city = input("Enter Emp City: ")
    
    values = (emp_name, emp_city)
    query = 'insert into employee(emp_name, emp_city) values(%s, %s)'
    c.execute(query, values )
    
    print("Data inserted !!!")
    
    conn.commit()

    
def edit():    
    display();
    emp_id = int(input("Enter Emp id to edit: "))
    
    emp_name = input("Enter New Name: ")
    emp_city = input("Enter New City: ")
  
    values = (emp_name, emp_city, emp_id)
    query = 'update employee set emp_name=%s, emp_city=%s where emp_id=%s'
    c.execute(query, values)
    
    print("Data Updated!!!")

    
    conn.commit()


def delete():    
    display();
    emp_id = int(input("Enter Emp id to delete: "))

    c.execute("delete from employee where emp_id=(%s)", (emp_id,))
      
    print("Data Deleted !!!")
    
    conn.commit()
    
    
def insertFromFile():
    
    file_path = "D:\data.txt"
    with open(file_path, "r") as file:
        for r in file:
            value=tuple(r.strip().split(","))
            print(value)
            
            query = 'insert into employee(emp_name, emp_city) values(%s, %s)'
            
            c.execute(query, r)


while True:
    print("1.Insert \n2.Edit \n3.Delete \n4.Display \n5.Insert from file \n0.Exit")
    
    ch = int(input("Enter Your Choice: "))
    
    if ch == 1:
        insert()
    
    elif ch == 2:
        edit()
        break
    
    elif ch == 3:
        delete()
    
    elif ch == 4:
        display()
        break
    
    elif ch == 5:
        insertFromFile()
        
    elif ch == 0:
        break
    else:
        print("Invalid Choice!")
    
conn.close()
    
    
    
    
    
    
    
    
    
    