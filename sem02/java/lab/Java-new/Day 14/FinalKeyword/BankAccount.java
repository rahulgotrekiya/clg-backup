public class BankAccount
{
    static final String bankName = "ABC Bank";
    public static void main(String args[])
    {
        //BankAccount b = new BankAccount();
        //b.bankName = "XYZ Bank";
        //bankName = "XYZ Bank"; Error
        System.out.println(bankName);
    }
    final void show()
    {
        System.out.println("Show Method..");
    }
}
class Other extends BankAccount
{
    //void show() Error
    //{
      //  System.out.println("Show 2");
    //}
}