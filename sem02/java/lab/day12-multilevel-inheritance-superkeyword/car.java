
// Incomplete
public class Vehicle {
    String brand = "TATA";
    void Vehicle(String brand){
        System.out.println("Brand: "+ brand);
    }
}

class car extends Vehicle{
    
    void car(String brand, String model){
        super(brand);
        System.out.println("model: "+ model);
    }
    
    public static void main(String args[]) {
        car c = new car("Hundai", "Always creata");
    }
}

