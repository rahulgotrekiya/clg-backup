import java.util.Scanner;
public class Employee
{
    int id = 71;
    @Override
    public int hashCode()
    {
        return id*31;
    }
    public static void main(String args[])
    {
        Employee emp = new Employee();
        System.out.println("ID : " + emp.hashCode());
    }
}