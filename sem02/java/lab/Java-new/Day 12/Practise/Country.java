public class Country
{
    public static void main(String args[])
    {
        City obj = new City();
        obj.displayCountry();
        obj.displayState();
        obj.displayCity();

        Department dept = new Department();
        dept.displayUniversity();
        dept.displayDepartment();
    }
    void displayCountry()
    {
        System.out.println("INDIA");
    }
}
class State extends Country
{
    void displayState()
    {
        System.out.println("GUJARAT");
    }
}
class City extends State
{
    void displayCity()
    {
        System.out.println("PORBANDAR");
    }
}
class University
{
    void displayUniversity()
    {
        System.out.println("University : LJ");
    }
}
class Department extends University
{
    void displayDepartment()
    {
        System.out.println("Department : MCA");
    }
}