class A
{
    public static void main(String args[])
    {
        A a=new A();
        a.show();

        B b=new B();
        b.show();
    }
    void show()
    {
        System.out.println("Class A Method Called");
    }
}
class B extends A
{
    public static void main(String args[])
    {
        A a=new A();
        a.show();

        B b=new B();
        b.show();
    }
    void show()
    {
        System.out.println("Class B Method Called");
    }
}