public class Vehicle
{
    void fuelType()
    {
        System.out.println("Vehicle can use different fuels");
    }
    public static void main(String args[])
    {
        Vehicle vehicle=new Vehicle();
        Car car=new Car();
        vehicle.fuelType();
        car.fuelType();
    }
}
class Car extends Vehicle
{
    void fuelType()
    {
        System.out.println("Car can use petrol or diesel");
    }
}