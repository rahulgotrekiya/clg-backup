abstract class shape{
    public void display(){ // Non abstract 
        System.out.println("This is non-abstract class");
    }
    public abstract double area(); // abstract
}

class circle extends shape {
    double radius;
    public circle(double radius) {
        this.radius = radius;
    }

    @Override
    public double area() {
        System.out.println("Area of circle is:" + 3.14 * radius * radius);
        return 3.14 * radius * radius;
    }
}

class rectangle extends shape {
    double length, width;
    public rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    @Override
    public double area() {
        System.out.println("Area of Rectangle is:" + length * width);
        return 0;
    }
}

class interfaceEx {
    public static void main(String[] args) {
        shape c = new circle(6.65);
        c.area();

        shape r = new rectangle(3.8, 4.8);
        r.area();
    }
}