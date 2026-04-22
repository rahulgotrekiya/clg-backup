data={}

def add():
   key = input("Enter Key: ")    
   value = input("Enter value: ")    
   data[key] = value
   print("added !")

def display():
   for k, v in data.items():
      print(k, ":", v)




while True:
   print("----Menu----")
   print("1. add")
   print("2. delete")
   print("3. search")
   print("4. display")
   print("5. exit")

   ch = int(input("Enter choice:"))


   if ch == 1:
      add()
      pass   
   elif ch == 2:
      pass   
   elif ch == 3:
      pass   
   elif ch == 4:
      display()
      pass   
   elif ch == 5:

      break
   else:
      print("Invalid")
