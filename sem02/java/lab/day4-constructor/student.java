import java.util.Scanner;
import java.lang.Math.*;
class student
{
    public static void main(String args[])
    {  
        student s = new student(8, 7);
        s.student();
    }
    private void student (){ 
        System.out.println("Show method is called");
    }
    public student() {
        System.out.println("student construtor 1 is called");
    }
    public student(int a, int b) {
        a = 5;
        b = 6;

        System.out.println("student construtor 2 is called");
        int c = a + b;
        System.out.println(c);

        a = 2;
        b = 3;
        System.out.println(a+b);
    }
}
