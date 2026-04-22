import java.util.Scanner;
/* Class Students and Class Employee
for Students - displayDetails() - id,name,sem
for employees - displaySalary() - id,name,salary

- then made both methods with same name..
*/
public class day4
{
    public static void main(String args[])
    {
        Students std = new Students();
        Employees emp = new Employees();
        std.displayDetails();
        emp.displayDetails();
    }
}
class Students
{
    int id,sem;
    String name;

    public void displayDetails()
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Student Name : ");
        name = sc.nextLine();
        System.out.print("Enter Student ID : ");
        id = sc.nextInt();
        System.out.print("Enter Student Sem : ");
        sem = sc.nextInt();

        System.out.println("ID : "+ id);
        System.out.println("NAME : "+ name);
        System.out.println("SEM : "+ sem);
    }
}
class Employees
{
    int id,salary;
    String name;

    public void displayDetails()
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Employee Name : ");
        name = sc.nextLine();
        System.out.print("Enter Employee ID : ");
        id = sc.nextInt();
        System.out.print("Enter Employee Salary ");
        salary = sc.nextInt();

        System.out.println("ID : "+ id);
        System.out.println("NAME : "+ name);
        System.out.println("SALARY : "+ salary);
    }
}