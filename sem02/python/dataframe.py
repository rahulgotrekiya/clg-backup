# -*- coding: utf-8 -*-
"""
Created on Mon Apr  6 12:46:14 2026

@author: Administrator
"""

# ------------------------------------------------------------
# Date: 6 Apr 2026

import pandas as pd
emp = {
    'eno' : [101, 102, 103, 104, 105, 106],
    'ename' : ['abc', 'def', 'ghi', 'jkl', 'mno', 'xyz'],
    'salary' : [10000, 12000, 13000, 55000, 105000, 1006]
}

df = pd.DataFrame(emp)

print(df)
print('\n----------------\n')


cid_officers = [
    (101, 'acp', 'ahemdabad'),
    (102, 'abhijeet', 'delhi'),
    (103, 'daya', 'mumbai'),
    (104, 'meet', 'gandhinagar'),
    (105, 'tarika', 'baroda'),
    (106, 'raj', 'surat'),     
]

df1 =pd.DataFrame(cid_officers, columns=['officer_id', 'officer_name', 'city'])

print(df1)

print('\n----------------\n')


# Finding the number of row and columns
print(df1.shape)

r, c = df.shape 
print(f'rows : {r}\ncolumns : {c}')

print(df.head()) # Display the first 5 records
print(df.tail()) # Display the last 5 records

print('\n----------------\n')


print(df[2:5]) # range 

print(df[::2]) # alternate

print(df[::-1]) # alternate


# retrieve the column names
print(df.columns)

# retrieve data from the columns mentioned
print(df[['eno', 'ename']])
print(df.ename)

# displaying the statistical information
print(df.describe())

print('\n----------------\n')

# findint the maximum and minimum values from a given field
print(f"maximum salary : {df['salary'].max()} \nminimum salary : {df['salary'].min()}")

print('\n----------------\n')

# query
print(df[df.salary > 50000])
print(df[['ename', 'salary']][df.salary > 50000])

print('\n----------------\n')

print(df1[df1.city == 'ahemdabad'])


print('\n----------------\n')

# ------------------------------------------------------------
# Date: 7 Apr 2026

print(df1.loc[1])

print(df1.index)
df1.index = range(1, len(df1) + 1)
print(df1)

# df2 = df1.set_index('eno');
# df1.set_index(0,inplace=True)  # if field name is not given
# df1.reset_index(inplace=True)

# print(df1)
# print(df1.loc[102])

df2 = df1.sort_values('officer_name', ascending=False)
print(df2)


# Grouping

data = {
        'Name' : ['A', 'B', 'C', 'D', 'E'],
        'Department': ['IT', 'HR', 'IT', 'HR', 'IT'],
        'Salary' : [10000, 12000, 13000, 55000, 1006]
}

data_frame = pd.DataFrame(data)

print(data_frame.groupby('Department')['Salary'].sum())
print(data_frame.groupby('Department')['Salary'].mean())
print(data_frame.groupby('Department')['Name'].count())
print(data_frame.groupby('Department')['Salary'].agg(['sum', 'mean', 'max']))





