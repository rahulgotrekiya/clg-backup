# -*- coding: utf-8 -*-
"""
Created on Mon Mar  2 11:29:29 2026

@author: admin
"""

import pickle

database="d://user.txt"

def menu():
    print("1. Register")
    print("2. Login")
    print("3. Show users")
    print("4. Exit")
        

with open(database, "rb+") as f:
    d=pickle.load(f)
    

def register():
    
    userID = input("Enter a unique  userID: ")
    
    if userID not in d:
        while True:
            password = input("Enter Password: ")
            pass2 = input("Confirm Password: ")
 
            if password == pass2:
                print("\n\n\tUser Registered Successfully...\n\n")
                with open(database, "rb+") as f:
                    d[userID]=password
                    pickle.dump(d, f)
                break
            else:
                print("Password does not match...")   
    else:
        print("\n\nUser id aready taken, Try new one\n\n")

def login():
    userID = input("Enter UserId:")
    if userID in d:
        while True:
            password = input("Enter password:")
            if password == d[userID]:
                print("\n\n\tUser Login Successfully...\n\n")
                break
            else:
                print("Password does not match...")  
    else:
        print("\n\n\tUser Not available...\n\n")  

while True:
    menu()
    ch = int(input("Enter Your choice:"))
    if ch == 1:
        register()
    elif ch == 2:
        login()
    elif ch == 3:
        print("\n\n", d,"\n\n")
    elif ch == 4:
        break
    else:
        print("Invalid Choice...")
        
        

# Logic
 
        
# import os

# f=open("d://rahul//user.txt", "ab+")

# user=input("Enter user:")
# password=input("Enter user:")

# if os.path.getsize("d://rahul//user.txt", "ab+") == 0:
    
#     rt=input("Enter the password again:")
#     if password == rt:
#         d[user]=d[password]
#         pickle.dump(d, f)

# else:
#     d=pickle.load(f)
#     lk=d.keys()
#     if(use in lk):
#         print("User aready available")
#     else:
#         rt=input("Enter the password again")
#         if password==rt:
#             d[user]=password
#             pickle.dump(d, f)
#             print("Registration succesfully")
            