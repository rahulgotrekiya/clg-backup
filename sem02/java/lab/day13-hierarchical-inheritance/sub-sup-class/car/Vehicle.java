public class Vehicle{
    void start(){
        System.out.println("Vehicle is starting");
    }    
    
    void displayCar(){
        System.out.println("This is Car");
    }

    public static void main(String[] args){
        Vehicle v = new Car();

        v.start();
        v.displayCar();
    }
}

class Car extends Vehicle{
    void start(){
        super.start();
        System.out.println("car is starting");
    }

    void displayCar(){
        System.out.println("This is Car");
    }
}
