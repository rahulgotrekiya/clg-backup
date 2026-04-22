
# -*- coding: utf-8 -*-
"""
Created on Mon Mar 30 11:11:43 2026

@author: mcaa250003
"""

# Create a form and enter name, email, gender, hobbies. On click of the button print data in file as dictionary object

import tkinter as tk
import mysql.connector

conn = mysql.connector.connect(
    host = 'localhost',
    port = '3309',
    user = 'root',
    password = '',
    database = 'python'
)

c = conn.cursor()

 
  

def submit_form():
    name = entry_name.get()
    email = entry_email.get()
    gender = gender_var.get()
    ctry = country.get()
    age = age_spinner.get()
    
    hobbies = []
    if cricket_var.get() == str(1):
        hobbies.append("Cricket")
    if gaming_var.get() == str(1):
        hobbies.append("Gaming")
    if reading_var.get() == str(1):
        hobbies.append("Reading")

    result =(name, email, gender, hobbies, ctry, age)
    
    
    with open("d:\\data.txt", 'w+') as file:
        file.write(str(result))
        
    query = f'insert into users(name, email, gender, hobbies, country, age) values({name}, {email}, {gender}, {hobbies}, {ctry}, {age})'
    c.execute(query)
    
    result_label.config(text="Data inserted !!!")

    conn.commit()
    
    
root = tk.Tk()
root.title("MCA")
root.geometry("500x500") 


# tk.Label(root, text="Enter Name:", font=('Arial', 10)).grid(row = 1, column = 0, padx = 10, pady = 1)
tk.Label(root, text="Enter Name:", font=('Arial', 10)).place(x=50, y=20)
entry_name = tk.Entry(root, width=20)
entry_name.place(x=200, y=20)

tk.Label(root, text="Enter Email:", font=('Arial', 10)).place(x=50, y=60)
entry_email = tk.Entry(root, width=20)
entry_email.place(x=200, y=60)

gender_var = tk.StringVar(value="Male")

tk.Label(root, text="Gender:", font=('Arial', 10)).place(x=50, y=120)
tk.Radiobutton(root, variable=gender_var, value="Male", text="Male", ).place(x=200, y=120)
tk.Radiobutton(root, variable=gender_var, value="Female", text="Female").place(x=200, y=140)

tk.Label(root, text="Hobbies:", font=('Arial', 10)).place(x=50, y=180)

cricket_var = tk.StringVar(value="Cricket")
gaming_var = tk.StringVar(value="Gaming")
reading_var = tk.StringVar(value="Reading")

tk.Checkbutton(root, variable=cricket_var, text="Cricket").place(x=200, y=180)
tk.Checkbutton(root, variable=gaming_var, text="Gaming").place(x=200, y=200)
tk.Checkbutton(root, variable=reading_var, text="Reading").place(x=200, y=220)

country_list = ["India", "EU", "Japan", "China"]
tk.Label(root, text="Select Country: ").place(x=50, y=260)
country = tk.StringVar()
listbox = tk.OptionMenu(root, country, *country_list)
listbox.config(width=15)
country.set("select country")
listbox.place(x=200, y=260  )

tk.Label(root, text="Select Age: ").place(x=50, y=320)
v1 = tk.IntVar()
age_spinner= tk.Spinbox(root, from_= 1, to = 50, textvariable = v1, width=5, fg='blue')

age_spinner.place(x=200, y=320)

tk.Button(root, text="Submit", command=submit_form).place(x=200, y=360)
result_label = tk.Label(root, text="", justify="left")
result_label.place(x=200, y=380)


root.mainloop()

