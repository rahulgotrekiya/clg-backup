# import sys

# print(sys.version)

# print("Hello"); print("How are you?"); print("Bye bye!") 

# print("Hello World!", end=" ")

# print("Hello, World!")
# print("My name is Rahul Gotrekiya")
# print("I'm learning Python!")

# number = 5 + 3
# print("5 + 3 equals:", number)

# num = int(input("Enter n: "))
# total = 0

# def fibonacci(n):
#    a = 0
#    b = 1

#    for i in range(n):
#       print(a, end=" ")
#       a, b = b, a + b

# def factorial(n):
#    fact = 1
#    for i in range(1, n+1):
#       fact *= i
#    return fact

# def is_prime(n):
#    if n <= 1:
#       return False
   
#    for i in range(2, n):
#       if n % i == 0:
#          return False
   
#    return True

# def sum_of_digits(n):
#    total = 0
#    while n > 0:
#       total += n % 10
#       n //= 10

#    return total
   

# # fibonacci(num)
# # print(factorial(num))
# print(sum_of_digits(num))

"""
if is_prime(num):
   print("Prime number")
else:
   print("Not Prime number")
"""


num = 212
temp = str(num)
rev = reversed(temp)
print(rev)
print(type(temp))


# while temp > 0:
#    dig = temp % 10
#    rev = rev * 10 + dig
#    temp //= 10

# if num == int(rev):
#    print(num, "is palandrome")
# else:
#    print(num, "is not palandrome")



def is_prime(n):
   if n < 2:
      return False
   for i in range(2, n):
      if i % n == 0:
         return False
   return True

print(is_prime(2))