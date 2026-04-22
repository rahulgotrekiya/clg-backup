interface Drawable {
    public void draw();
}

class Circle implements Drawable {
    public void draw() {
        System.out.println("\tDrawing a Circle");
    }
}

class Rectangle implements Drawable {
    public void draw() {
        System.out.println("\tDrawing a Rectangle");
    }
}

public class Shape {
    public static void main(String[] args) {
        Circle c = new Circle();
        Rectangle r = new Rectangle();

        c.draw();
        r.draw(); 
    }
}