import java.util.Scanner;
interface Shapes2D
{
    double getArea(); //abstract method
}
interface Shapes3D
{
    double getVolume(); //abstract method
}
abstract class Shape
{
    abstract void display();
}
class Circle extends Shape implements Shapes2D
{
    double radius;
    public void display()
    {
        System.out.println("Circle");
    }
    public double getArea(){
        double area;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Radius : ");
        radius = sc.nextDouble();
        area = (Math.PI*radius*radius);
        return area;
    }
}
class Sphere extends Shape implements Shapes3D
{
    double radius;
    public void display()
    {
        System.out.println("Sphere");
    }
    public double getVolume(){
        double volume;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Radius : ");
        radius = sc.nextDouble();
        volume = 4/3*Math.PI*(Math.pow(radius,3));
        return volume;
    }
}
public class ShapesDemo
{
    public static void main(String args[])
    {
        Circle circle = new Circle();
        circle.display();
        System.out.println("Area of Circle : " + circle.getArea());

        Sphere sphere = new Sphere();
        sphere.display();
        System.out.println("Volume of Sphere : " + sphere.getVolume());
    }
}