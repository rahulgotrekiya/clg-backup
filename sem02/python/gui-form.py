# -*- coding: utf-8 -*-
"""
Created on Thu Apr  2 11:02:05 2026

@author: Administrator
"""

import tkinter as tk

def on_check():
    print(Cricket.get())

def on_click():
    def on_back():
        nw.destroy()
        root.deiconify()
    
    print(gender.get())
    root.withdraw()
    nw = tk.Toplevel(root)
    
    tk.Label(nw, text = "Thank You !").pack()
    tk.Button(nw, text = "Back", command = on_back).pack()
        
root = tk.Tk()
root.geometry("500x500") 

Cricket = tk.IntVar()
tk.Label(root, text="Enter Name:", font=('Arial', 10)).place(x=50, y=60)
entry_name = tk.Entry(root, width=20)
entry_name.place(x=200, y=60)

gender = tk.StringVar(value="Male")
tk.Label(root, text="Gender:", font=('Arial', 10)).place(x=50, y=100)
tk.Radiobutton(root, text = "Male",variable = gender, value="male").place(x=200, y=100)
tk.Radiobutton(root, text = "Female",variable = gender, value="female").place(x=200, y=120)

tk.Button(root, text = "Display", command = on_click).place(x=200, y=150)

root.mainloop()