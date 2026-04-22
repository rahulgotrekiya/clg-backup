import java.util.Scanner;
public class car
{
    String brand,model;
    int year;
    public static void main(String args[])
    {
        car c1 = new car();
        car c2 = new car();
        getDetails(c1);
        getDetails(c2);
        c1.displayDetails(c1.brand,c1.model,c1.year);
        c2.displayDetails(c2.brand,c2.model,c2.year);
    }
    public void displayDetails(String brand,String model,int year)
    {
        System.out.println("Brand : "+brand);
        System.out.println("Model : "+model);
        System.out.println("Year : "+year);
    }
    public static void getDetails(car c)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Brand : ");
        c.brand = sc.nextLine();
        System.out.println("Enter Model : ");
        c.model = sc.nextLine();
        System.out.println("Enter Year : ");
        c.year = sc.nextInt();
    }
}