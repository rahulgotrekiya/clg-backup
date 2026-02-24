# -*- coding: utf-8 -*-
"""
Created on Mon Jan 12 12:11:10 2026

@author: mcaa250003
"""

# # find the minimum and maximum of 2 number
# n1 = 3
# n2 = 4

# if n1 > n2:
#     print(n1, "is Maximum")
#     print(n2, "is Minimum")
# else:
#     print(n2, "is Maximum")
#     print(n1, "is Minimum")
    
# # maximum of 3 numbers

# n3 = 1
# if n1 > n2 and n1 > n3:
#     print(n1, "is Maximum")
# elif n2 > n1 and n2 > n3:
#     print(n2, "is Maximum")
# else:
#     print(n3, "is Maximum")
    
# # input salary (basic, da, hra, pf), 
# # if basic is < 10000 then da = 25%, hra = 5%,
# # If basic >= 10000 and basic <= 30000 then da = 54%, hra = 10%,
# # If basic > 30000 then da = 40%, hra = 20%
# # pf is same for all 12%

# salary = int(input("Enter Basic Salary: "))
# pf = salary * 0.12

# if salary < 10000:
#     da = salary * 0.25
#     hra = salary * 0.5
# elif salary >= 10000  and salary <= 30000:
#     da = salary * 0.35
#     hra = salary * 0.10
# elif salary > 30000:
#     da = salary * 0.40
#     hra = salary * 0.20

# net_sal= salary + da + hra - pf
# print ("Net Salary: ", net_sal)

# print 1 to 10 numbers in acending and decending order using range

for i in range(1, 10):
    print(i)

for i in range(10, 0, -1):
    print(i)
    