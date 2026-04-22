# -*- coding: utf-8 -*-
"""
Created on Sat Apr  4 12:17:31 2026

@author: Administrator
"""

import matplotlib.pyplot as pl
import pandas as pd

df = pd.read_excel("D:\\data.xlsx")

# print(df['emp_no', df['emp_name']])

x = df['emp_name']
y = df['salary']
print(x)
print(y)
print(df)
pl.bar(x, y)
pl.show()