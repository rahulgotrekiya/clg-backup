import java.util.Scanner;
public class ThrowTry
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        try{
            System.out.print("Enter a PassWord : ");
            String password = sc.next();

            if(password.length()<6)
                throw new IllegalArgumentException("Password length must be longer than 6");

            System.out.println("Password : " + password);
        }
        catch(IllegalArgumentException e){
            System.out.println("IllegalArgumentException : " + e.getMessage());
        }
    }
}