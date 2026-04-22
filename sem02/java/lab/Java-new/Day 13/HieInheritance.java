public class HieInheritance
{
    public static void main(String args[])
    {
        Gujarat guj = new Gujarat();
        Rajasthan raj = new Rajasthan();
        
        guj.showGujarat();
        guj.showIndia();

        raj.showRajasthan();
        raj.showIndia();
    }
}
class India
{
    void showIndia()
    {
        System.out.println("India");
    }
}
class Gujarat extends India
{
    void showGujarat()
    {
        System.out.println("Gujarat");
    }
}
class Rajasthan extends India
{
    void showRajasthan()
    {
        System.out.println("Rajasthan");
    }
}