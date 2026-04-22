public class Vehicle
{
    void start()
    {
        System.out.println("Vehicle is Starting..");
    }
    public static void main(String args[])
    {
        Vehicle vehicle;
        vehicle = new Car();
        System.out.println("Calling start()");
        vehicle.start();
        System.out.println("displayCar() will give error..");
        //vehicle.displayCar(); // Error
    }
}
class Car extends Vehicle
{
    void start()
    {
        System.out.println("Car is Starting..");
    }
    void displayCar()
    {
        System.out.println("This is a Car");
    }
}