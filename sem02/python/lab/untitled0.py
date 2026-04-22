# -*- coding: utf-8 -*-
"""
Created on Sat Jan 17 12:23:05 2026

@author: mcaa250003
"""

# --- 25. Reverse a tuple input ---
t_input = tuple(input("25. Enter elements for a tuple (space separated): ").split())
print("Reversed tuple:", t_input[::-1])

# --- 26. Replace 'o' with '@' without replace() ---
s_input = input("\n26. Enter a string: ")
replaced_s = ""
for char in s_input:
    if char == 'o' or char == 'O':
        replaced_s += '@'
    else:
        replaced_s += char
print("Processed string:", replaced_s)

# --- 27. Count vowels using a vowel tuple ---
v_string = input("\n27. Enter a string to count vowels: ").lower()
vowels_tuple = ('a', 'e', 'i', 'o', 'u')
v_count = 0
for char in v_string:
    if char in vowels_tuple:
        v_count += 1
print("Total vowels:", v_count)

# --- 28 & 29. Create tuples t1 and t2 ---
t1 = ("John", "Kumar", "Doe")  # FirstName, MiddleName, LastName
t2 = (85, 92, 78, 90, 88)      # Marks of 5 subjects

# --- 30. Total of marks (with and without sum()) ---
# With sum()
print(f"\n30. Total (with sum()): {sum(t2)}")
# Without sum()
total_manual = 0
for mark in t2:
    total_manual += mark
print(f"30. Total (without sum()): {total_manual}")

# --- 31 & 32. Nested tuple t3 and search ---
t3 = (t1, t2)
search_num = input("\n32. Enter a number to search in t3: ")
# Convert input to int for comparison with t2
found = False
if search_num.isdigit():
    num = int(search_num)
    for item in t3:
        if num in item:
            found = True
            break
print(f"Number {search_num} present in t3: {found}")

# --- 33. Fruit search ---
fruits = ("Apple", "Banana", "Mango", "Orange", "Grape")
f_search = input("\n33. Enter a fruit name to search: ")
if f_search.capitalize() in fruits:
    print(f"Yes, {f_search} is in the tuple.")
else:
    print("Fruit not found.")

# --- 34 & 35. Gujarat cities and name lengths ---
cities_input = input("\n34. Enter 3 cities of Gujarat (space separated): ").split()
cities = tuple(cities_input)

print("35. Length of city names:")
for city in cities:
    # With len()
    l_with = len(city)
    # Without len()
    l_without = 0
    for char in city:
        l_without += 1
    print(f"City: {city} | Length (with len): {l_with} | Length (manual): {l_without}")

# --- 36 & 37. Nested tuple t4 and position search ---
t4 = ("Raj", ("Coding", "Reading"), ("Amit", "Sita"), "B.Tech")
find_val = input("\n37. Enter element to find in t4: ")
found_pos = False
for i in range(len(t4)):
    if t4[i] == find_val:
        print(f"Found at position: {i}")
        found_pos = True
    elif isinstance(t4[i], tuple):
        if find_val in t4[i]:
            print(f"Found at position: {i} (inside sub-tuple index {t4[i].index(find_val)})")
            found_pos = True
if not found_pos:
    print("Not found")

# --- 38. Segregate odd and even numbers ---
ints = (10, 21, 32, 45, 50, 63, 70, 81, 92, 105)
even_list = []
odd_list = []
for n in ints:
    if n % 2 == 0:
        even_list.append(n)
    else:
        odd_list.append(n)
print(f"\n38. Even tuple: {tuple(even_list)}")
print(f"38. Odd tuple: {tuple(odd_list)}")

# --- 39. Student list (L1) operations ---
L1 = ["Rahul", "Anjali", "Sneha", "Rahul", "Vikram"]

print(f"\n39a. Total students: {len(L1)}")
L1.append("Priya") # 39b
print(f"39c. Sorted students: {sorted(L1)}")

check_name = input("39d. Enter student name to search: ")
if check_name in L1:
    # 39e
    print(f"Present. Total count: {L1.count(check_name)}")
    print(f"First occurrence position: {L1.index(check_name)}")
else:
    print("Not present.")

L1.pop() # 39f. Remove last
rem_name = input("39g/h. Enter student name to remove (all occurrences): ")
# Use list comprehension to remove all occurrences
L1 = [s for s in L1 if s != rem_name]
print(f"List after removals: {L1}")

# --- 40. Max and Min in list ---
nums_list = [23, 56, 12, 89, 4, 77, 34, 90, 11, 45]
print(f"\n40. Max: {max(nums_list)}, Min: {min(nums_list)}")

# --- 41. Count vowels in alphabet list ---
alphas = ['a', 'b', 'c', 'e', 'i', 'z', 'o', 'q', 'u']
v_in_list = 0
for char in alphas:
    if char.lower() in 'aeiou':
        v_in_list += 1
print(f"41. Vowels in alphabet list: {v_in_list}")

# --- 42. Even numbers between 1 to 21 ---
even_range = [x for x in range(1, 22) if x % 2 == 0]
print(f"42. Even numbers (1-21): {even_range}")
