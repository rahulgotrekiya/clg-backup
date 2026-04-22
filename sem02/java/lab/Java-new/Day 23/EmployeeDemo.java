/*
Custom Exception: InvalidSalaryException
Extends: Exception
Used when salary is negative.
Class: Employee
Variables: empId, name, salary
Method:
setSalary(double salary) throws InvalidSalaryException
→ If salary < 0, throw exception
→ Otherwise assign salary
display()
→ Show employee details
Main Class: EmployeeDemo
Creates object
Sets salary using try-catch
Displays employee details
*/
import java.util.*;
class InvalidSalaryException extends Exception
{
    InvalidSalaryException(String msg){
        super(msg);
    }
}
class Employee
{
    int empId;
    String name;
    double salary;
    Employee(int empId,String name)
    {
        this.empId = empId;
        this.name = name;
    }
    void setSalary(double salary) throws InvalidSalaryException
    {
        if(salary < 0){
            throw new InvalidSalaryException("Salary must be positive");
        }else{
            this.salary = salary;
        }
    }
    void display(){
        System.out.print(" Employee ID : " + empId);
        System.out.print(" Name : " + name);
        System.out.print(" Salary : " + salary);
    }
}
public class EmployeeDemo
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter Employee ID : ");
        int empId = sc.nextInt();
        System.out.print("Enter Employee NAME : ");
        String name = sc.next();
        System.out.print("Enter SALARY : ");
        double salary = sc.nextDouble();

        try{
            Employee emp = new Employee(empId,name);
            emp.setSalary(salary);
            emp.display();
        }catch(InvalidSalaryException e){
            System.out.println(e.getMessage());
        }
    }
}