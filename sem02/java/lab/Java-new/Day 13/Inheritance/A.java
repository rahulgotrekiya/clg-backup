// Hybrid Inheritance - Used Single level and Multi level
public class A
{
    int x=9;
    public static void main(String args[])
    {
        C c=new C();
        D d=new D();
    }
}
class B extends A
{
    int y=5;
}
class C extends B
{
    C(){
        System.out.println(x + y);
    }
}
class D extends A{
    int z=100;
    D(){
        System.out.println(z/x);
    }
}