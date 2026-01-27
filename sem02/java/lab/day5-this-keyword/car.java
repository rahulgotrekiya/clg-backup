import java.util.Scanner;

class car {
    int price=1111111;  // If we don't use this keyword then this value will be talken otherwise the method's value will be taken
    car (int price) {
        this.price=price;
        System.out.println("Constructor Is called!");
    }
    
    public static void main(String args[]) {
        car c = new car(800000);
        System.out.println("Price is "+ c.price);
    }
}