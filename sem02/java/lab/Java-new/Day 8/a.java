// inner class and outer class

import java.util.Scanner;
public class a
{
    int x=10;
    public class b
    {
        int y=20;
        public void display()
        {
            System.out.println("Outer calss var = "+ x +" Inner calss var = "+y);
        }
    }

    public static void main(String args[])
    {
        a A = new a();
        a.b B = A.new b();
        B.display();
    }
}

// Outer calss var = 10 Inner calss var = 20