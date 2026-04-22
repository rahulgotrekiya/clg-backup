# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

import pandas as pd

marks = [34, 45, 56, 78, 89]
df = pd.Series(marks, name='marks')
print(df)

df = df+2
print(df)

df  = pd.DataFrame([(1, 'raj'), (2, 'yash'), (3, 'meet'), (4, 'rahul'), ])
print(df)

a = [23, 34, 56, 67, 70]
l=['ab', 'de', 'fg', 'xy']
d = pd.Series(a, name='marks', index=l)
print(d)
print(d['ab'])

result=pd.concat([df, d], axis = 1)
print(result)