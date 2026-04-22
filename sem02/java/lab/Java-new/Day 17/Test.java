public class Test
{
    protected void finalize()
    {
        System.out.println("Object Destroyed..");
    }
    public static void main(String args[])
    {
        Test t = new Test();
        t = null;
        System.gc();
    }
}