public class Vehicle {
    String brand="Royal Enfield";
    int year=2025;

    void displayVehicle(){
        System.out.println(brand);
        System.out.println(year);
    }

    public static void main(String[] args){
        Car c = new Car();
        Bike b = new Bike();
        c.displayVehicle();
        c.displayCar();

        b.displayBike();
    }
}

class Car extends Vehicle{
    String brand = "BMW";
    void displayCar(){
        System.out.println(brand);
    }
}

class Bike extends Vehicle{
    String type = "Cafe racer";
    void displayBike(){
        System.out.println(type);
    }    
}