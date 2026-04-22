# -*- coding: utf-8 -*-
"""
Created on Wed Apr 22 09:23:44 2026

@author: Administrator
"""

import tkinter as tk
import mysql.connector
import pandas as pd


root = tk.Tk()

root.title("MCA")
root.geometry("500x500")

conn = mysql.connector.connect(
    host = 'localhost',
    port = '3309',
    user = 'root',
    password = '',
    database = 'python'
)
  
c = conn.cursor()

def submit_form():
    pid = enter_id.get()
    name= enter_name.get()
    age = age_spinner.get()
    disease = enter_disease.get()
    bill = enter_bill.get()

    result =(pid, name, age, disease, bill)
    # print(result)
    query = 'insert into patients(pid, name, age, disease, bill) values(%s, %s, %s, %s, %s)'
    c.execute(query, result)
    
    result_label.config(text="Data inserted !!!")

    conn.commit()

# SET-1
# 1. Create a GUI to input patient details. (ID, Name, Age, Disease, Bill Amount)

tk.Label(root, text="Patient Details", font=('Times New Roman', 20)).grid(row = 1, column = 1, padx = 1, pady = 10)

tk.Label(root, text="ID",).grid(row = 2, column = 0, padx = 10, pady = 10)

enter_id= tk.Entry(root, width=20)
enter_id.grid(row = 2, column = 1, padx = 30, pady = 10)

tk.Label(root, text="Name",).grid(row = 3, column = 0, padx = 10, pady = 10)

enter_name= tk.Entry(root, width=20)
enter_name.grid(row = 3, column = 1, padx = 30, pady = 10)

tk.Label(root, text="Age",).grid(row = 4, column = 0, padx = 10, pady = 10)
v1 = tk.IntVar()

age_spinner= tk.Spinbox(root, from_= 1, to = 50, textvariable = v1, width=18)
age_spinner.grid(row = 4, column = 1, padx = 10, pady = 10)

tk.Label(root, text="Disease",).grid(row = 5, column = 0, padx = 10, pady = 10)

enter_disease= tk.Entry(root, width=20)
enter_disease.grid(row = 5, column = 1, padx = 30, pady = 10)

tk.Label(root, text="Bill Amount",).grid(row = 6, column = 0, padx = 10, pady = 10)

enter_bill= tk.Entry(root, width=20)
enter_bill.grid(row = 6, column = 1, padx = 30, pady = 10)

tk.Button(root, text="Submit", command=submit_form).grid(row = 7, column = 1, padx = 1, pady = 10)

result_label= tk.Entry(root, text="", justify="center")
result_label.grid(row = 8, column = 1, padx = 1, pady = 10)

# 2. Save records into a database.


# 3. Load records into a Pandas DataFrame.
# (Hint: df = pd.read_sql_query("SQL Statement / query", conn)

query = 'select * from patients'
df = pd.read_sql_query(query, conn)
print(df)

# 4. Display:
# o Total billing per disease

query = 'select * from patients'
df = pd.read_sql_query(query, conn)
print(df)

print(df.groupby('disease')['bill'].sum())

# o Patients above age 60

query = 'select * from patients where age > 60'
df = pd.read_sql_query(query, conn)
print(df)

# 5. Plot:
# o Bar chart of patients per disease
query = 'select * from patients'
print(df['name'])

pl.plot(x, y)
pl.show()

# o Histogram of patient ages 

root.mainloop()

