# -*- coding: utf-8 -*-
"""
Created on Wed Feb 11 11:56:20 2026

@author: admin
"""
import pickle

l=[1,2,3,4]
d={"rno":"1", "Name":"rahul"}

f = open("d://rahul/first.txt", "wb")
# f.tell(10,0)    # tell the function position
pickle.dump(l, f)
pickle.dump(d,f)
f.close()

f = open("d://rahul/first.txt", "rb")
print(pickle.load(f))
print("dictionary=",t)
f.close()
