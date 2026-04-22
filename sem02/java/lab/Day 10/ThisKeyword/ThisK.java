class ThisK
{
    ThisK(int a)
    {
        System.out.println(a);
    }
    ThisK()
    {
        System.out.println("Default Constructor..");
    }
    public static void main(String args[])
    {
        ThisK t = new ThisK(5);
    }
}