public class Vehicle
{
    public static void main(String args[])
    {
        Car car  = new Car("Hyundai","Creta");
        car.display();
    }
}
class Car extends Vehicle2
{
    void display()
    {
        //super.display();
        //System.out.println(x);
        //System.out.println(super.x);
        System.out.println("This is a Car");
    }
    public Car(String brand,String model)
    {
        super("Creta");
        System.out.println("Brand : "+brand + " Model : "+model);
    }
}
class Vehicle2
{
    int x = 100;
    void display()
    {
        System.out.println("This is a Vehicle");
    }
    public Vehicle2(String brand)
    {
        System.out.println("This is Constructor of Vehicle 2 " + brand);
    }
}