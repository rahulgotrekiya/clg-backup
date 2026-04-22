# -*- coding: utf-8 -*-
"""
Created on Wed Feb 18 12:50:42 2026

@author: admin
"""

from functools import reduce

l=[1,2,3,4,5]

r=list(filter(lambda x:x%2==0,[x for x in range(1, 21)]))
print(r)

r2=list(map(lambda x:x**2,l))
print(r2)

r3=reduce(lambda x,y:x+y,l)
print(r3)

f = ["Apple", "Banana", "Mango", "Orange", "Grape"]
t=sorted(f, key=lambda x:len(x), reverse=True)
u=sorted(f, key=lambda x:x[1])
print(u)
v=sorted(f, key=lambda x:x[len(x)-1])
print(t)

l1=[("abc", 45, "f"), ("xyz", 23, "g"), ("mnp", 67, "a")]

s=sorted(l1, key=lambda x:x[1])
s=sorted(l1, key=lambda x:x[0], reverse=True)
print(s)

d={"abc":(45, 25), "def":(56, 24), "xyz":(30, 100)}


s1=dict(sorted(d.items(), key=lambda x:x[1])) # Value
print(s1)
s1=sorted(d.items(), key=lambda x:x[0]) # Key
s1=sorted(d.items(), key=lambda x:x[1]) # Value


s=sorted(d.items(), key=lambda x:x[0][1]) # if neasted

"""
zip()
"""

name=["abc", "nikhil", "rahul"]
rno=[1,3,4]
marks=[10,20,30]

mapped = zip(name, rno, marks)
print(mapped)