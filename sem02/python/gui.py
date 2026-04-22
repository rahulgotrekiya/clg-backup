# -*- coding: utf-8 -*-
"""
Created on Sat Mar 28 10:21:52 2026

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

txt2 = tk.Entry(root, width=20)
txt2.place(x=100, y=70)

lable2 = tk.Label(root, text="Eneter No 2:", font=('Arial', 10))
lable2.place(x=5, y=70)


btn = tk.Button(text="Click Here")
btn.place(x=100, y=200)


root.mainloop()

