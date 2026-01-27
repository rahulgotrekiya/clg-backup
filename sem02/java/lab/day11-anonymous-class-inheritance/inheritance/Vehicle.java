public class Vehicle {
    String brand = "Hyundai";
    int year = 2026;

    public static void main(String args[]) {
        Car c = new Car();
        c.displayVehicle();
        c.displayCar();
    }

    void displayVehicle(){
        System.out.println("Brand: "+ brand);
        System.out.println("Year: "+ year);
    }
}

class Car extends Vehicle{
    String model = "Venue";
    void displayCar(){
        System.out.println("Model: "+model);
    }
} 