# -*- coding: utf-8 -*-
"""
Created on Mon Feb  9 11:03:26 2026

@author: admin
"""

import os
os.path.isfile("file_name")
os.getcwd()
os.mkdir("path")
os.rmdir("path")
ps.rename("oldname", "newname")


f = open("d://rahul//new.txt", "rb")
# f.write("Hello Rahul.")

# f.seek(0,2)  # movese after the last position

# f.seek(0,0)  # movese after the first position

f.seek(5,1)

print("After seek:", f.read(4))

for line in f:
    print(line)

# l=["My name is abc\n", "What is your name\n"]

# f = open("d://rahul//first.txt", "r")
# s=f.read() 
# s=f.read(4)
# s=f.readline(4)
# s=f.readlines(4)
# s=f.writelines(l)
 
# print("Variable:", s)
f.close()
# print("Direct:",  f.read())

f.close()


with f = open("d://rahul//new.txt", "rb") as f:
    
    
