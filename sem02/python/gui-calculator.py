# -*- coding: utf-8 -*-
"""
Created on Sat Mar 28 11:27:01 2026

@author: Administrator
"""

import tkinter as tk



root = tk.Tk()

root.title("MCA")
root.geometry("500x500")

lable1 = tk.Label(root, bg="white", fg="black", text="Eneter No 1:", font=('Arial', 10))
# lable.pack()
lable1.place(x=5, y=10)

txt1 = tk.Entry(root, width=20)
txt1.place(x=100, y=10)

lable2 = tk.Label(root, text="Eneter No 2:", font=('Arial', 10))
lable2.place(x=5, y=50)

txt2 = tk.Entry(root, width=20)
txt2.place(x=100, y=50)

add = tk.Button(text="+", command=lambda x, y: x+y)
add.place(x=100, y=200)

# sub = tk.Button(text="-", command=sub)
# sub.place(x=100, y=200)

# mul = tk.Button(text="*", command=mul)
# mul.place(x=100, y=200)

# div = tk.Button(text="/", command=div)
# div.place(x=100, y=200)

# mod = tk.Button(text="%", command=mod)
# mod.place(x=100, y=200)

lable3 = tk.Label(root, text="Answer:", font=('Arial', 10))
lable3.place(x=5, y=100)

# answer = tk.Entry(root, width=20)
answer = tk.Label(root, font=('Arial', 10))
answer.place(x=100, y=100)



btn = tk.Button(text="Add Numbers", command=)
btn.place(x=100, y=200)


root.mainloop()

