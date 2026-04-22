import java.util.Scanner;
class a
{
    public static void main(String args[])
    {
        add();
        a a1=new a();
        a1.sub(9,2);
        a1.mul(9,2,1);
    }

    public static void add()
    {
        System.out.println("void without parameter");
    }

    public int sub(int a,int b)
    {
        System.out.println(a-b);
        return 0;
    }

    public double mul(double a,double b,double c)
    {
        System.out.println(a*b*c);
        return 0;
    }
}

// void without parameter
// 7
// 18.0