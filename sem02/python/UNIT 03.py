# -*- coding: utf-8 -*-
"""
Created on Mon Feb  9 11:42:10 2026

@author: admin
"""
# import os

# UNIT 03
# Functions and Files in Python
# 1.	Take user input and create a menu driven program to perform mathematical operations like addition, subtraction, multiplication, division, integer division, power. Return values from the functions
# 2.	Create functions to calculate 
# a.	Area of a rectangle = width * length
# b.	Area of a triangle = ½ * Height * Base
# c.	Area of a circle = pi*r*r
# 3.	Create functions to convert decimal numbers to binary, octal and hexadecimal numbers. Always return values from the functions
# # 4.	Write an UDF to return a list having only unique values by removing duplicate values from the provided input list.
# # Eg. Sample List : [1,2,3,3,3,3,4,5]
# # Unique List : [1, 2, 3, 4, 5]

# def getUnique(i):
#     s = set(i)
#     unique = [s]
#     return unique
# li = [1, 2, 3, 4, 5]
# print(getUnique(li))

# # 5.	Write a Python function to multiply all the numbers in a list.

# def multLi(n):
#     mult = 1
#     for i in n:
#         mult *= i
#     return mult

# print("Sum of list: ", multLi(li))

# # 6.	Write a UDF to check the inputted number is between specified range or not. 

# def checkInRange(start, end, key):
#     for i in range(start, end):
#         if i == key:
#             flag=True
#             break
#         else:
#             flag=False
            
#     if flag:
#         print(key, "is in the range:", start, end)
#     else:    
#         print(key, "is not in the range:", start, end)
        
# start = int(input("Enter Start: "))
# end = int(input("Enter End: "))
# key = int(input("Enter Value to find: "))
# checkInRange(start, end, key)

# # 7.	Write a function to calculate total number of Uppercase and lowercase characters in the string.

# def calc_upper_lower(str):
#     lower = 0
#     upper = 0
#     for i in str:
#         if i.islower():
#             lower += 1 
#         elif i.isupper():
#             upper += 1 
#     print("Uppercase: ", upper, "Lowercase: ", lower)

# str1 = input("String: ")
# calc_upper_lower(str1)

# # 8.	Write an UDF to check if the user given number is a prime number or not.

# def is_prime(n):
#     if n < 2:
#         return 1
#     else:
#         for i in range(2, n-1):
#             if n % i == 0:
#                 return 0
#     return 1 

# num = int(input("Enter num:"))
# if is_prime(num):
#     print("num is prime")
# else:
#     print("num is not prime")


# # 9.	Write a findString() function to find all the positions of occurrences of string2 in string1 and return that value. If string2 is not present in string1 then display suitable message.
# # Eg. Str1 = Hello all, Good Morning to all. (pass it as a parameter in the function)
# #        Str2 = ‘all’ (pass it as a parameter, but if not passed take a default argument)
# # O/p: String 2 found at positions: [6, 27]

# def findString(str1, str2):
#     start_index=0
#     l=[]
#     while True:
#         p = str1.find(str2, start_index)
#         if p == -1:
#             break
#         l.append(p)
#         start_index = p+len(str2)
#     print(l)    
    
# str1 = "Hello all, Good Morning to all."
# str2 = "all"

# findString(str1, str2)


# 10.	Create a list of fruits and using different functions perform the following operations: Show the use of globals() and don’t return from the functions
# a.	Add a fruit at the last

fruits = ["Apple", "Banana", "Mango", "Orange", "Grape"]


# b.	Insert a fruit at a particular position (pass it as an argument. If the position is not passed then take default argument as 1)

def fruit_add(name, pos=1):
    global fruits
    fruits.insert(pos, name)
    print(fruits)

fruit_add("Kiwi", 3)

# c.	Update the fruit (use keyword arguments)



# d.	Remove a fruit from the list (pass an index position/ pass a name of the fruit as an argument)


def remove_fruit(name, pos=1):
    global fruits
    fruits.insert(pos, name)
    print(fruits)


# e.	Arrange the fruits in an order

print(sorted(fruits))

# 11 Create a function to generate prime numbers. Ask total numbers form the user and pass in the function which will return a list of prime numbers.

def is_prime(n):
    if n < 2:
        return 1
    else:
        for i in range(2, n-1):
            if n % i == 0:
                return 0
    return 1 

num = int(input("Enter No:"))

prime_nums = list(filter(is_prime, [x for x in range(1, num)]))
print(prime_nums)


# 12 Eg. GeneratePrime(10) function will return 1st 10 prime numbers starting from 2 like  2,3,5,7,11,13,15,1719,23
# 13	Create a lambda function that will return maximum of two numbers

max2 = lambda x, y:x if x > y else y
print(max2(10, 20))

# 14	Create a lambda function that will return maximum of three numbers

max3 = lambda x, y, z: x if (x > y and x > z) else (y if y > z else z)
print(max3(10, 20, 30))

# 15	Write a lambda function that takes one number and if the number is even, returns that number multiplied by 5 else if the number is odd, returns that number multiplied by 10

one_num = lambda x:x * 10 if x % 2 else x * 5 
print(one_num(9))

# 16	Take a list of mixed elements and 

li = [1, "Banana", 2, "Mango", 19, "Orange", 19.9, "Grape"]

# a.	Write a lambda function to separate integer elements as an output list. 

only_int = list(filter(lambda x: isinstance(x, int), li))
print("Only Integers: ", only_int)

# b.	Write another lambda function to separate string elements as an output list.

only_str = list(filter(lambda x: isinstance(x, str), li))
print("Only String: ", only_str)

# 17	Modify the above program using filter()

filter_int = list(filter(lambda x: type(x) is int, li))
print("Only Integers Using Filter(): ", filter_int)

filter_str = list(filter(lambda x:type(x) is str, li))
print("Only String Using Filter(): ", filter_str)

# 18	Filter all vowels from the given string.

str1 = "Hello good Morning"
vowels="AEIOUaeiou"

filter_vowels = list(filter(lambda x: x in vowels, str1))

print(filter_vowels)

# 19	From the provided list filter, the even numbers and odd numbers as a separate output list

num = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

even = list(filter(lambda x:x % 2 == 0, num))
odd = list(filter(lambda x:x % 2 == 1, num))

print("Even List:", even) 
print("Odd List:", odd)

# 20	Write a lambda function that will take 2 inputs. If inputs are integers, it will return the product of 2 numbers. Else perform concatenation.

que_20 = lambda x, y: x * y if type(x) is int and type(y) is int else str(x) + str(y)
print(que_20("Hello ", 10))

# 21	Sort the list elements using lambda

num = [9, 2, 3, 4, 7, 1]
sort = sorted(num, key=lambda x:x)
print("Sorted list:", sort)

# 22	Find the average of all the elements passed as an argument in lambda (using variable length arguments)

avg = lambda *n : sum(n) / len(n) if n else 0
print(avg(10 , 20 , 30, 40, 50))

# 23	Find the square of each element of a list (using map())

li = [1, 2, 3, 4, 5]
square = list(map(lambda x : x*x, li))
print("Square: ", square)

# 24	Use a lambda function to calculate grades for a list of scores (using map()) Eg scores = [88, 92, 78, 95, 86]

scores = [88, 92, 78, 95, 86]

grade = list(map(lambda score: 'A' if score >= 90 else ('B' if score >= 80 else 'C'), scores))

print("Scores: ", scores)
print("Grades: ", grade)

# 25	Add all the elements of the list (using reduce())

from functools import reduce
li = [10, 20, 30 , 40]
add_ele = reduce(lambda x, y: x + y, li)
print("Add elements:", add_ele)

# 26	Multiply all the elements of the list (using reduce())

mult_ele = reduce(lambda x, y: x * y, li)
print("Add elements:", mult_ele)

# 27	Find the maximum element from the list using reduce()

max_ele = reduce(lambda x, y: max(x, y), li)
print("Maximum elements:", max_ele)

# 28	Sorting the dictionary elements using lambda (by using sorted () method) according to age and if age is same then sort my name
# Eg. stud= [{'name': 'Amit', 'age': 25}, {'name': 'Bina', 'age': 22}, {'name': 'Dax', 'age': 25}]

stud= [
    {'name': 'Amit', 'age': 25},
    {'name': 'Bina', 'age': 22},
    {'name': 'Dax', 'age': 25}
]

sort_stud = sorted(stud, key=lambda x: (x['age'], x['name']))

print(sort_stud)

# 29	Take 2 lists and add the elements of it if the 1st number is greater than the other else find the difference between them
# Eg. nums1 = [6, 5, 3, 9]   nums2 = [0, 1, 7, 7]
# O/P [6, 4, 10, 2]

nums1 = [6, 5, 3, 9]
nums2 = [0, 1, 7, 7]

diff = list(map(lambda x, y: (x-y) if x > y else x + y, nums1, nums2))
print(diff)

# 30	Take a list of person names and display them all in upper case using map()

names = ['Abhijit', 'Daya', 'Acp', 'Sachin', 'Pankaj', 'Saluke']

uppercase = list(map(lambda x : x.upper() , names))

print(uppercase)

# 31	Take a list of floating-point numbers and display list of all round numbers. Also round them with just 2 decimal points. Using map()
# Eg. [6.56773, 9.57668, 4.00914, 56.24241, 9.01344]
# o/p [7, 10, 4, 56, 9] and [6.57, 9.58, 4.01, 56.24, 9.01]

fp_nums = [6.56773, 9.57668, 4.00914, 56.24241, 9.01344]

round_fp = list(map(lambda x : round(x), fp_nums))
round_fp2 = list(map(lambda x : round(x, 2), fp_nums))
print(round_fp, "and", round_fp2)

# 32	Take a list of words and print all palindrome words  using filter() [Hint: string slicing str1[::-1]]

words = ['Abhijit', 'Daya', 'nayan', 'Sachin', 'Pankaj', 'Saluke']

palindrome = list(filter(lambda x: x==x[::-1], words))
print(palindrome)

# 33	Take a list of students and filter the students whose name is less than 6 characters.

students = ['Abhijit', 'Daya', 'nayan', 'Sachin', 'Pankaj', 'Saluke']

less_6 = list(filter(lambda x: len(x) <= 6, students))
print(less_6)

# 34	Take a string as an input and display the output to analysis the string based on separate words. Using map()

str = input("Enter string: ")

# a.	Display the words in upper case along with the length of each word  

analysis = list(map(lambda x: (len(x), x.upper()), str.split(' ')))
print(analysis)


Str1 = "Hello how are you?"

words = Str1.split()

l1 = map(lambda x: x.upper(), words);
l2 = map(lambda x: x.upper(), words);

a = zip(l1, l2)
print(list(a))


# b.	Display total number of each vowel in each word

# Eg. Str1 = ‘Hello how are you?’
# o/p: [{'a': 0, 'e': 1, 'length': 5}, {'a': 0, 'e': 0, 'length': 3}, {'a': 1, 'e': 1, 'length': 3}, {'a': 0, 'e': 0, 'length': 4}]

str1 = "Hello how are you?"
words = str1.split()

num_vow = list(
    map(
        lambda w: { 
            'a': w.lower().count('a'), 
            'e': w.lower().count('e'), 
            'i': w.lower().count('i'), 
            'o': w.lower().count('o'), 
            'u': w.lower().count('u'), 
            'length': len(w)
        }, 
    words)
)

print(num_vow)


# 35	Take a matrix as input and transpose its elements using lambda
# Eg. matrix = [[1, 2],[3,4],[5,6],[7,8]]
#       o/p: [[1, 3, 5, 7], [2, 4, 6, 8]]

matrix = [
    [1, 2],
    [3, 4],
    [5, 6],
    [7, 8]
]

print(list(zip(*matrix)))

transpose = lambda x:[[ x[i][j] for i in range(len(x)) ] for j in range(len(x[0]))]
print(transpose(matrix))


# 36	Find the factorial of a number using lambda (recursive)

# def fact(n):
#     if n == 1:
#         return 1
#     else:
#         return n * fact(n-1)


fact = lambda x: 1 if x == 1 else x * fact(x-1)
print(fact(5))

# 37  Create a menu driven program with user defined functions to insert update delete  elements in the dictionary object of employees

# Emp = {empCode:[name, age, salary, (expert areas)],…..}

def insert():
    li=[]
    empCode = input("Enter Emp Code: ")
    name = input("Enter Name: ")
    age = int(input("Enter Age: "))
    salary = int(input("Enter Salary: "))
    exp = input("Enter Expert Areas: ")
    exp_area = exp.split(",")
    
    li.append(name)
    li.append(age)
    li.append(salary)
    li.append(tuple(exp_area))

    Emp[empCode] = li    

def update():
    print("insert")


def delete():
    print("insert")

Emp = {}

while True:
    
    print("\n1. Insert\n2. Update\n3. Delete\n4. Display\n5. Exit")
    ch = int(input("Enter Your choice: "))
    
    if ch == 1:
        insert()
    elif ch == 2:
        update()
        
    elif ch == 3:
        delete()
        
    elif ch == 4:
        print(Emp)

    elif ch == 5:

        break;
    
    else:
        print("Invalid Choice !")
    
        

#      38  Write a python script to generate result for a particular student.

# 1.	Create a student data in a dictionary object as shown below:
# stud = {1: {"name":'Amit', "age":23,"marks": [(10,15,12), (11,12,13)]},               
#              2: {"name":'Bhumi',"age":22,"marks": [(13,15,11), (10,10,13)]},             
#              3: {"name":'Bharat',"age":23,"marks": [(12,12,14), (13,14,15)]}
#         }
# NOTE: Here students are getting marks of 3 subjects in 2 attempts of test in a form of tuple

# 2.	Create separate user defined functions to (Create a menu for options)
# a. Take user input for creating entry of any new student (addStud())
# b. Print all marks of a specific student. (Result(name))
# c. Display overall result of all students in a given format


# # 39	Create a text file with different modes like w, w+, a, a+ and write few lines in it 

file_path = "d://rahul/modes.txt"

# file = open(file_path, "w")

# file.write("Unit 03")
# file.close()

# file = open(file_path, "w+")

# file.write("New Unit")
# file.seek(0,0)
# print(file.read())
# file.close()

# file = open(file_path, "a")

# file.write("This is new text")
# file.seek(0,0)
# file.close()

# file = open(file_path, "a+")

# file.write("New Unit")

# file.seek(0,0)
# print(file.read())
# file.close()

# # 40	Read the content of the whole file together

# file = open(file_path, "r")
# print(file.read())
# file.close()

# # 41	Print the length of the file data

# file = open(file_path, "r")
# file_len = len(file.read())
# print("Len of file:", file_len)
# file.close()

# # 42	Read the file content line by line

# file = open(file_path, "r")
# for i in file:
#     print(i)

# file.close()

# # 43	Print total number of words in each line in the file
 
# file = open(file_path, "r")

# for line in file:
#     print("Words:", len(line.split(" ")))

# file.close()

# # 44	Print all the words in reverse.

# file = open(file_path, "r")

# for line in file:
#     li = line.split(" ")
#     for i in li:
#         print(i[::-1])

# file.close()

# # 45	Write multiple lines in a text file. Using list object

# lines = ["Line 01\n", "Line 01\n", "Line 01\n", "Line 01\n"]

# with open(file_path, "w+") as file:    
#     file.writelines(lines)
#     file.seek(0, 0)
#     print(file.read())    
    
# # 46	Take a filename from the user to read that file

# name = input("Enter FileName:")

# path = "d://rahul//" + name + ".txt"

# with open(path, "r") as file:    
#     print(file.read())

# 47	If the file to be read is not available then print suitable message

# name = input("Enter FileName:")

# paths = "d://rahul//" + name + ".txt"

# if os.path.isfile(paths):    
#     with open(paths, "r") as file:    
#         print(file.read())
# else:
#     print("File not exist")

# # 48	After reading the file content, append the text at the end of the file.


# with open(file_path, "r+") as file:
#     print(file.read())
#     # print(file.tell())
#     file.write("Hello this is the textafter reading")
#     print(file.read())
    
# # 49	Open a file and append a line at the beginning of the file content 


# with open(file_path, "r+") as file:
#     t=file.read()
#     p="This is text from program\n"
#     s=p+t
#     file.seek(0,0)
#     file.write(s)
#     # print(file.read())

# # 50	Copy the content of one file to another

# new_file = "d://rahul/new.txt"

# with open(file_path, "r") as file:
#     text = file.read()
#     with open(new_file, "w") as file2:
#         file2.write(text)
#         print("the content copied to new file !")
    
# # 51	Read 10th to 15th byte from the file and print.

# with open(file_path, "r") as file:
#     file.seek(10,0)
#     s = file.read(6)
#     print(s)

# # 52	Read an existing file and take a user input string to be appended in that file. Also ask the position where new line need to be appended. Update the file content and print the updated file. [Hint: Make a file with new line character after each line]

# with open(file_path, "r+") as file:
#     inp = input("Enter a String: ")    
#     inp = inp + "\n"
#     pos = int(input("Enter position:"))
#     l=file.readlines()
#     l.insert(pos-1, inp)
#     file.seek(0, 0)
#     file.writelines(l)
#     file.seek(0, 0)
#     print(file.read())
    
# # 53	Read an alternate bytes/ character from the file.

# with open(file_path, "r") as file:
#     str = file.read()
#     for i in range(0, len(str), 2):
#         print(str[i])
        

# # 54	Read alternate lines from the file.
 
# with open(file_path, "r+") as file:
#     l=file.readlines()
#     for i in range(0, len(l), 2):
#         print(l[i])

# # 1.	Write a python script to read the text file content and print the output in form of line wise total words in the file. 
# # File Content as below:
    
# # Hello, How are you?
# # Very good morning
# # Have a nice day to all
# # Good Bye…

# # Output: [(1,4), (2,3), (3,6), (4,2)]

# with open(file_path, "r+") as file:
#     lines=file.readlines()
#     li=[]
#     for i in lines:
#         t = (lines.index(i)+1, len(i))
#         li.append(t)
# print("Output: ",li)

# 2.	Open a text file using with statement and write and read the content from that file.

# with open(file_path, "r+") as file:

# 3.	Take the user input for data to be written in the text file. Enter the data line by line, till ‘@’ character is entered by the user at the end.

bin_file = "d://rahul/bin.txt"

# with open(bin_file, "wb") as file:
    

# 4.	Create a text file having string and numeric data. Write a script to separate the string and numbers in two different files [Hint: ch.isdigit() method will return true , if character is a number] 
# 5.	Create a menu driven program to perform various file operations through python functions as:
# a)	Create a file – (define the filename as a default argument)
# b)	Read the content of a specified file – Return the content in a string
# c)	Append the content in the specified file
# d)	Rename a file – (Take filename as keyword arguments)
# e)	Delete a file - (define the filename as a default argument)
# f)	Create a directory / folder
# g)	Display all the files present in the specified folder
# h)	Display only .txt file names from the specified folder
# i)	Display the files, starting with letter ‘t’ in their filename.
# j)	Display all python files from a specified folder.(Either .py extension or filename/ folder name contains ‘py’ in between)
# k)	Display the file names having .txt extension