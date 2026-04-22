    # -*- coding: utf-8 -*-
"""
Created on Tue Apr  7 13:20:27 2026

@author: Administrator
"""

import matplotlib.pyplot as pl
import pandas as pd

# Unit -5
# GUI , Data Analysis with Pandas & Visualization with matplotlib
# 1.	Create a GUI program that takes user input in the Entry widget and on button click that text must be displayed on the Label widget
    # 1.	Insert a record in the DB table by taking user input from the GUI
# 2.	Update and delete the record in the DB table.
# 3.	Create a Calculator application using tkinter module in Python
# 4.	Perform different mathematical operations using GUI – button widget
# 5.	Create a GUI for File handling operations like:
    # a.	Open a text file – the name provided by the user
    # b.	Create a new text file
    # c.	Edit the content of the text file
    # d.	Delete the specified text file
    # e.	Search a specific word in the text file.
# 6.	Create a GUI based program to take a number from the user and separate that number in 2 different files based on if the number is a prime number or not.
# 7.	Create a dataframe from a .csv file
# 8.	Create a dataframe from the dictionary object
# 9.	Create a dataframe from a list object
# 10.	Create a dataframe from an excel sheet. (Student data: RollNo, Name, Age, Marks)

df = pd.read_excel("D:\\student-data.xlsx")
   
    # 1.	Display total number of rows and columns in the dataframe
r, c = df.shape

print(f'Rows: {r}\tColumns: {c}\n')    
    
    # 2.	Display only 1st 3 rows from dataframe

print('First 3 rows:')    
print(df.head(3))

    # 3.	Display only last two rows from dataframe

print('Last 2 rows:')    
print(df.tail(2))

    # 4.	Display 3rd to 7th row of the dataframe

print('3rd to 7th rows:')
print(df[3:7])

    # 5.	Display all the rows in reverse order.

print('All the Rows in Reverse order: ')
print(df[::-1])

    # 6.	Display all column names of the dataframe.

print(f'All column names: {df.columns}')
    
    # 7.	Display only name and age of all students from the dataframe
 
print('\nOnly name and age of all students: ')
print(df[['Name', 'Age']])
    
    # 8.	Display maximum and minimum marks from the dataframe.

print(f'\nMaximum marks: {df["Marks"].max()} \nMinimum marks: {df["Marks"].min()}')

    # 9.	Display the statistical analysis of marks from the student dataframe
    
print('\nStatistical analysis of marks:')
print(df["Marks"].describe())

    # 10.	Display the name of the student having marks > 50

print('\nStudent having marks > 50:')
print(df[['Name', 'Marks']][df.Marks > 50])

    # 11.	Display the rollno and name of the student whose age is > 20

print('\nStudent having age > 20:')
print(df[['Name', 'Age']][df.Age > 20])

    # 12.	Display the students having age between 20 and 25
    
print('\nStudent havingage between 20 and 25:')
print(df[['Name', 'Age']][df.Age > 20][df.Age < 25])

    # 13.	Display the name of the student who has scored maximum marks

print('\nStudent who has scored maximum marks:')
print(df[df.Marks == max(df['Marks'])])

    # 14.	Display the students who have scored more than average marks (use mean)

print('\nStudent who has scored more than average marks:')
print(df[df.Marks >= df['Marks'].mean()])

    # 15.	Change the index in DataFrame and create a new Dataframe

new_df = df.set_index('RollNo')
print(new_df)

    # 16.	Modify the original DataFrame by changing the Index inplace.

print('Index inplace')
df.set_index('RollNo',inplace=True)
print(df)

    # 17.	Search for a particular row using index value

print(df.loc[1])    

    # 18.	Reset the index

df.reset_index(inplace=True)
print(df)

    # 19.	Arrange all the students in alphabetical order of their names
    
print(df.sort_values('Name'))

    # 20.	Arrange all the students according to their marks in descending order
    
print(df.sort_values('Name', ascending=False))

    # 21.	Display the missing marks with 0

print('\nMissing marks with 0:')
print(df.fillna(0))

    # 22.	Display only those students who have scored more than 0. (drop the missing value row)

print('\nStudents who have scored more than 0:')
print(df.dropna())

    # 23.	Display the DataFrame with suitable message for missing data 
  
print('\nDataFrame with suitable message for missing data:')
print(df.fillna({
    'RollNo' : '0',
    'Name' : 'unknown',
    'Age' : '0',
    'Marks' : 'absent',
}))

    # Bar chart
    
name = df['Name']
marks = df['Marks']

pl.bar(name, marks, width=0.8, color='skyblue')
pl.xlabel("Students")
pl.ylabel("Marks")
pl.title("Student Data", loc='center')
pl.show()

    # Histogram

pl.hist(marks, bins=[0, 30, 60, 90, 120], color='skyblue', edgecolor='black')
pl.xlabel("Marks Range")
pl.ylabel("Number of students")
pl.title("Distribution of Student Marks", loc='center')

pl.show()


# 11.	Create a scalar series (dictionary object with single value) and convert it into dataframe

# 12.	Create MultiIndex.from_arrays like Students [ ], Score [ ], Age [ ]

students = ['rahul', 'abhijeet', 'meet', 'smit']
exams = ['mid', 'final', 'mid', 'final']

scores = [85, 92, 78, 88]
ages = [20, 20, 21, 21]

index = pd.MultiIndex.from_arrays([students, exams])
# , names=['Student', 'Exam']

df = pd.DataFrame({'Score': scores, 'Age': ages}, index=index)
print(df)
# print(df.loc['rahul'])

# 13.	Create MultiIndex.from_frame – 

# a.	Use dictionary object for employee data for empId, Name and Salary
# b.	Create DataFrames by read_excel(), read_csv() and set multiindex
# 14.	Create DataFrame from List object with Index values
# List object contains details for 5 students’ result: Pass /Fail with scores in 3 subjects
# 15.	Find total number of ‘pass’ students and ‘fail’ students in each subject from above list – use of groupby
# 16.	Find minimum and maximum marks of each subject
# 17.	Create 2 data frames from SQL tables and merge them based on common column (keys)
# 18.	Plot a line graph, 
# 19.	Make a letter ‘A’ using plot method with x and y points and then after passing the array of points (multiple lines) 
# 20.	Make letters ‘E’, ‘F’, ‘H’, ‘I’, ‘K’, ‘L’, ‘M’, ‘W’, ‘X’ and ‘Z’ using plot()
# 21.	 Use of linestyle as 'dotted' , ‘dashed’, ‘dashdot’ for plotting above characters, Make all letters colourful, set different line width, use different markers
# 22.	Make a diamond shape using multiple lnes
# 23.	Set the graph title, xlabel and ylabel
# 24.	Draw grids with (x and y axis , linestyle, linewidth)
# 25.	Save all line graphs in separate .png files
# 26.	Draw bargraph for selling of different electronic gadgets
# 27.	Draw a histogram for the yearly performance of a student
# 28.	Draw a pie chart for the student’s participation in different games

