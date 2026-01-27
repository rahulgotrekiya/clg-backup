
class Vehicle {
    int x = 10;

    void display(){
        System.out.println("This is a vehicle");
    }
}

class car extends Vehicle{ 
    int x = 90;
    
    void display(){
        super.display();
        System.out.println("This is a car");
        System.out.println("x: "+ super.x);
        System.out.println("x: "+ x);
    }

    public static void main(String[] args){
        car obj1 = new car();
        obj1.display();
    }
}

