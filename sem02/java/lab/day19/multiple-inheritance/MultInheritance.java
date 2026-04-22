interface Vehicle {
    static public void start() {
        System.out.println("\tVehicle is starting...");
    } 
}

interface Electric {
    static public void charge(){
        System.out.println("\tVehicle is charging...");
    }
}

class ElectricCar implements Vehicle, Electric {
    public void start(){
        System.out.println("\tElectricCar is starting...");
    }
    public void charge(){
        System.out.println("\tElectricCar is charging...");
    }
}

public class MultInheritance {
    public static void main(String[] args)  {
        ElectricCar ec = new ElectricCar();
        
        Vehicle.start();
        Electric.charge();

        ec.start();
        ec.charge();
    }
}