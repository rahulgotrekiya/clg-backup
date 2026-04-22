Emp = {}

def insert():
   empCode = input("Enter Emp Code: ")
   name = input("Enter Name: ")
   age = int(input("Enter Age: "))
   salary = int(input("Enter Salary: "))
   exp = input("Enter Expert Areas (comma separated): ")
   exp_area = tuple(exp.split(","))

   Emp[empCode] = [name, age, salary, exp_area]


def update():
   empCode = input("Enter Emp Code to update: ")
   if empCode in Emp:
      name = input("Enter New Name: ")
      age = int(input("Enter New Age: "))
      salary = int(input("Enter New Salary: "))

      empCode[empCode] = [name , age , salary, Emp[empCode][3]]
      print("Updated successfully!")
   else:
      print("Employee not found!")


def delete():
   empCode = input("Enter Emp Code to delete: ")
   if empCode in Emp:
      del Emp[empCode]
      print("Deleted successfully!")
   else:
      print("Employee not found!")
   
def display():
   if len(Emp)==0:
      print("No employees!")
   else:
      for c, d in Emp.items():
         print("Code: ", c, ", Name:", d[0], ", Age:", d[1], ", Salary:", d[2], ", Expertise:", d[3])


while True:
   print("\n1. Insert\n2. Update\n3. Delete\n4. Display\n5. Exit")
   ch = int(input("Enter your choice: "))
   
   if ch == 1:
      insert()
   elif ch == 2:
      update()
   elif ch == 3:
      delete()
   elif ch == 4:
      display()
   elif ch == 5:
      break
   else:
      print("Invalid Choice!")