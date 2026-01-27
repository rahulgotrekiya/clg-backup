
// Incomplete
public class Vehicle {
    String brand = "Hyundai";
    int year = 2026;

    

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

class electricCar extends Car {
    String bettryCapicity = "6 Years";

    void displayElectricCar(){
        System.out.println("Brand: "+ brand);
        System.out.println("Year: "+ year);
        System.out.println("Bettery Capicity: "+ bettryCapicity);
    }

    public static void main(String args[]) {
        electricCar obj1 = new Car();
        obj1.displayVehicle();
        obj1.displayCar();
        obj1.displayElectricCar();
    }
}