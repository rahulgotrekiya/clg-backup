public class Demo
{
    public static void main(String args[])
    {
        Country country = new City();
        country.display();
       // country.displayState();
       // country.displayCity();    
    }
}
class Country
{
    void display()
    {
        System.out.println("Country - India");
    }
}
class State extends Country
{
    void display()
    {
       System.out.println("State - Gujarat");
    }
}
class City extends State
{
    void display()
    {
       System.out.println("City - Ranavav");
    }
}