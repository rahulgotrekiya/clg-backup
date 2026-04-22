import java.util.Scanner;
// import java.lang;

interface Shape2D {
    public double getArea();
}

interface Shape3D {
    public double getVolume();
}

abstract class Shape {
    abstract void display();
}

class Circle extends Shape implements Shape2D {
    double radius;

    public void display(){
        System.out.println("Circle");
    }

    Circle() {} // default constructor

    Circle(double radius) {     // parameterized constructor
        this.radius = radius;
    }

    public double getArea() {
        return Math.PI * Math.pow(radius, 2);
    }
}

class Sphere extends Shape implements Shape3D {
    double radius;
    Sphere(double radius) {
        this.radius = radius;
    }

    public void display(){
        System.out.println("Sphere");
    }

    
    public double getVolume() {
        return 4/3 * Math.PI * Math.pow(radius, 3);
    }
}

public class ShapesDemo {
    public static void main(String[] args) {
        double r;
        System.out.print("Enter Radius: ");
        Scanner sc = new Scanner(System.in);
        r = sc.nextDouble();

        Circle c = new Circle(r);
        Sphere s = new Sphere(r);

        c.display();
        System.out.println("Area of Circle: " + c.getArea());
 
        s.display();
        System.out.println("Area of Circle: " + s.getVolume());
    }
}