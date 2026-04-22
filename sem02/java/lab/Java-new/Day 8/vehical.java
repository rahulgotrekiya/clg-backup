// inner class and outer class

import java.util.Scanner;
public class vehical
{
    public class car
    {
        public void show()
        {
            System.out.println("Inner calss method");
        }
    }

    public void show()
    {
       System.out.println("Outer calss method");
    }

    public static void main(String args[])
    {
        vehical v = new vehical();
        // car c = new car();
        v.show();
    }
}

// Outer calss method
