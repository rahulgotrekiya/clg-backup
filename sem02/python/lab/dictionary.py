# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

d = {"eno" : 1, "ename" : "abc", "salary":5000}
print(d)

print(d["eno"])

d["ename"] = "sssss"
print(d)

d["destination"] = "hr"
print(d)

print(len(d))

print(d.keys())

l=list(d.keys())
print(l)

print(d.values())

l1=list(d.values())
print(l1)

print(d["salary"])

for i in d:
    print(i)
    
for i in d:
    print(i,d[i])

for k,v in d.items():  # it returns key and values from your dictionary as object
    print(k, v)
    
print(d.get("eno", -1)) # if eno is not there then it will returns -1 if we not specify then it will return none

del d["ename"]

print(d)

print(d.pop("eno"))  # this will give the element which we mentioned in our key

students={1:[23, 33, 55], 2:[33, 11, 55]}
print(students)

for i in students:
    l=students[i]
    s=10
    for j in l:
        s=s+j
    print("total of student", i, "is", s)










