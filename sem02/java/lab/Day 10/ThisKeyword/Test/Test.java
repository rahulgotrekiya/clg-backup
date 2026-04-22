// class Test
// {
//     public static void main(String args[])
//     {
//         Test t1 = new Test();
//         t1.call();
//     }
//     void call()
//     {
//         show(this);
//     }
//     void show(Test t)
//     {
//         System.out.println("Method Called..");
//     }
// }
class Test
{
    public static void main(String args[])
    {
        Test2 t2 = new Test2();
    }
    Test(Test2 t2)
    {
        System.out.println("Constructor of Test");
    }
}
class Test2
{
    Test2()
    {
        Test t = new Test(this);
    }
}