interface Drawable
{
    public void draw(); // abstract method of interface
}
class Circle implements Drawable
{
    // Overriding method
    @Override
    public void draw()
    {
        System.out.println("Drawing Circle..");
    }
}
class Rectangle implements Drawable
{
    // Overriding method
    @Override
    public void draw()
    {
        System.out.println("Drawing Rectangle..");
    }
}
public class Interface16
{
    public static void main(String args[])
    {
        Circle circle = new Circle();
        Rectangle rectangle = new Rectangle();
        circle.draw();
        rectangle.draw();
    }
}