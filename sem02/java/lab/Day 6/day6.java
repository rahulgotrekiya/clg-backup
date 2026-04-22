public class day6
{
    public static void main(String args[])
    {
        day6 d=new day6(5,9);
        d.show();
    }
    public day6()
    {
        System.out.println("This is Constructor");
    }
    public day6(int a,int b)
    {
        a=5;
        b=6;
        System.out.println("This is Constructor with parameter"+ (a+b));
        a=0;
        b=1;
        System.out.println(a+b);
    }
    public void show()
    {
        System.out.println("Show Method - It is Default Constructor.. No Parameters");
    }
}