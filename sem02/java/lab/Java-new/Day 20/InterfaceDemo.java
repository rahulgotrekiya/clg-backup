interface A
{
    static final int a=7;
    public void methodA();
}
interface B
{
    public void methodB();
}
interface C extends A,B
{
    public void methodC();
}
class Demo implements C
{
    public void methodA()
    {
        System.out.println("A Method");
    }
    public void methodB()
    {
        System.out.println("B Method");
    }
    public void methodC()
    {
        System.out.println("C Method");
    }
}
public class InterfaceDemo
{
    public static void main(String args[])
    {
        Demo d = new Demo();
        d.methodA();
        d.methodB();
        d.methodC();
        System.out.println("A = "+A.a);
    }
}