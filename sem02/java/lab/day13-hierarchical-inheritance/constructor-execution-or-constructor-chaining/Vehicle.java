public class Vehicle{
    Vehicle(){
        System.out.println("Vehicle Constructor Called");        
    }

    public static void main(String args[]){
        ElectricCar ec = new ElectricCar();
        
    }
}

class Car extends Vehicle{
    Car(){
        System.out.println("Car Constructor Called");
    }
}

class ElectricCar extends Car{
    ElectricCar(){
        System.out.println("ElectricCar Constructor Called");
    }
}