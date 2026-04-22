public class Vehicle
{
    String brand="Hyundai";
    int year=2026;

    public static void main(String args[])
    {
        Car car=new Car();
        Bike bike=new Bike();

        car.displayVehicle();
        car.displayCar();

        bike.displayBike();
    }
    void displayVehicle()
    {
            System.out.println(brand);
            System.out.println(year);
    }
}
class Car extends Vehicle
{
    String model="Creta";
    void displayCar()
    {
        System.out.println(model);
    }
}
class Bike extends Vehicle
{
    String type="Sports";
    void displayBike()
    {
        System.out.println(type);
    }
}