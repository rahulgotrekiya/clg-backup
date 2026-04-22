# -*- coding: utf-8 -*-
"""
Created on Thu Apr  2 11:40:37 2026

@author: Administrator
"""

import matplotlib.pyplot as pl

x = [1, 8]
y = [4, 6]

pl.plot(x, y)
pl.show()

x = [1, 3, 5, 7]
y = [3, 5, 8, 4]

# pl.plot(x, y)
# pl.plot(x)

# pl.plot(x, y, 'o', marker="*", ms=15, mec='yellow')

# pl.plot(x, y, ls='dashed', c='black', linewidth='2', marker=".", ms=15, mec='yellow')

x = [2, 3, 4, 6]
y = [3, 4, 5, 6]

m = [1, 2, 3, 4]
z = [5, 6, 7, 8]

pl.plot(x, y)
pl.plot(m, z)

pl.xlabel("x axis")
pl.ylabel("y axis")
pl.title("Student Data", loc='left')
pl.show()

pl.scatter(x, y)
pl.scatter(m, z)
pl.grid()

pl.show()

# barchart
students = ['rahul', 'hardik', 'abhijit', 'daya', 'salunke']
marks = [100, 40, 60, 55, 150]

# pl.bar(students, marks, width=0.5, color='skyblue')   # Vertical bar
pl.barh(students, marks, height=0.7, color='skyblue')   # Horizontal bar
pl.xlabel("Students")
pl.ylabel("Marks")
pl.title("Student Data", loc='center')
pl.show()

# Histogram
marks = [55, 60, 65, 70, 70, 75, 75, 75, 75, 78, 80, 82, 88, 90, 91, 95, 95, 98]

pl.hist(marks, bins=[50, 60, 70, 80, 90, 100], color='skyblue', edgecolor='black')

pl.xlabel("Marks Range")
pl.ylabel("Number of students")
pl.title("Distribution of Student Marks", loc='center')

pl.show()


labels = ['Python', 'Java', 'C++', 'JavaScript']
slices = [40, 25, 20, 15]
colors = ['#66b3ff', '#99ff99', '#ffcc99', '#ff9999']
explode = [0.1, 0, 0, 0]

pl.pie(
       slices,
       labels = labels,
       colors = colors,
       explode = explode,
       autopct = '%1.2f%%',
       startangle = 180,
       shadow = False,
       counterclock = False,
       pctdistance = 0.75,
       labeldistance = 1.2,
       wedgeprops = {'edgecolor': 'black'}
)

pl.title("Programming Language Popularity")
pl.show()






