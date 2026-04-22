// Multi-level Inheritance
public class Vehicle
{   
    String brand = "Hyundai";
    String year = "2025";
    public static void main(String args[])
    {
        ElectricCar ec = new ElectricCar();
        ec.displayVehicle();
        ec.displayCar();
        ec.displayElectricCar();
    }
    void displayVehicle()
    {
        System.out.println("Brand : "+brand);
        System.out.println("Year : "+year);
    }
}
class Car extends Vehicle
{
    String model = "Creta";
    void displayCar()
    {
        System.out.println("Model : "+model);
    }
}
class ElectricCar extends Car
{
    String batterCapacity = "50000 MAH";
    void displayElectricCar()
    {
        System.out.println("Battery Capacity : "+batterCapacity);
    }
}