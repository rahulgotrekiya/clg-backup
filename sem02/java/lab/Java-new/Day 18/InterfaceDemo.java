interface Test{
    // abstract method - no body
    void display();

    // Default method - with body
    default void show(){
        System.out.println("Default Method");
    }

    // Static method - with body
    static void info(){
        System.out.println("Static Method");
    }
}
public class InterfaceDemo implements Test
{
    public static void main(String args[])
    {
        InterfaceDemo interfaceDemo = new InterfaceDemo();
        interfaceDemo.display();
        interfaceDemo.show();
        interfaceDemo.info();
    }
    void display(){
        System.out.println("Display method in class..");
    }
}