interface Vehicle
{
    static public void start()
    {
        System.out.println("Vehicle is Starting..");
    } // static method to print - Allowed with body after java 8
}
interface Electric
{
    static public void charge()
    {
        System.out.println("Vehicle is Charging..");
    }
}
class ElectricCar implements Vehicle,Electric
{
    public void start()
    {
        System.out.println("Electric Car is Starting..");
    }
    public void charge()
    {
        System.out.println("Electric Car is Charging..");
    }
}
public class InterfaceMultiple
{
    public static void main(String args[])
    {
        ElectricCar electircCar = new ElectricCar();
        electircCar.start();
        Vehicle.start();
        electircCar.charge();
        Electric.charge();
    }
}