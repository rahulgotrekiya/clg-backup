public class Vehicle
{
    void start()
    {
        System.out.println("Vehicle is Running..");
    }
     void displayCar()
    {
        System.out.println("Vehicle Display");
    }
    public static void main(String args[])
    {
        Vehicle vehicle = new Car();
        vehicle.start();
        vehicle.displayCar();
    }
}
class Car extends Vehicle
{
    void start()
    {
        //super.start();
        System.out.println("Car is Starting..");
    }
    void displayCar()
    {
        System.out.println("Car Display");
    }
}