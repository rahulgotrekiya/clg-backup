// Custom Exception: InvalidSalaryException
// Extends: Exception
// Used when salary is negative.
// Class: Employee
// Variables: empId, name, salary
// Method:
// setSalary(double salary) throws InvalidSalaryException
// → If salary < 0, throw exception
// → Otherwise assign salary
// display()
// → Show employee details
// Main Class: EmployeeDemo
// Creates object
// Sets salary using try-catch
// Displays employee details

import java.util.*;
class InvalidSalaryException extends Exception {
    InvalidSalaryException(String msg){
        super(msg);
    }
}

class Employee {
    int empId;
    String name;
    double salary;

    Employee(){}; // Default constructor 
    Employee(int empId, String name){    // Parameterised constructor 
        this.empId = empId;
        this.name = name;        
    }

    public void setSalary(double salary) throws InvalidSalaryException { 
        if(salary < 0) {
            throw new InvalidSalaryException("Invalid Salary !!!");
        }
        else {
            this.salary = salary;
            System.out.println("Salary Set Successfully !");
        }
    }

    public void display(){
        System.out.println("Emp Id: " + empId);
        System.out.println("Name: " + name);
        System.out.println("Salary: " + salary);
    }
}

class EmployeeDemo {
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Emp Id:");
        int empId = sc.nextInt();
        
        System.out.print("Enter Name:");
        String name = sc.next();

        System.out.print("Enter Salary:");
        double salary = sc.nextDouble();

        try {
            Employee emp = new Employee(empId, name);
            emp.setSalary(salary);
            emp.display();
        }
        catch (InvalidSalaryException e){
            System.out.println("Exception: " + e.getMessage());
        }


   }
}