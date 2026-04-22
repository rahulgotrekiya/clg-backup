public class Vehicle
{
    Vehicle()
    {
        System.out.println("Vehicle Constructor Called..");
    }
    public static void main(String args[])
    {
        ElectricCar elec = new ElectricCar();
    }
}
class Car extends Vehicle
{
    Car()
    {
        System.out.println("Car Constructor Called..");
    }
}
class ElectricCar extends Car
{
    ElectricCar()
    {
        System.out.println("Electric Car Constructor Called..");
    }
}