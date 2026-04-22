import java.util.*;
class InvalidAgeException extends Exception{
    InvalidAgeException(String message){
        super(message);
    }
}
public class CustomException
{
    public static void main(String args[])
    {
        try{
            Scanner sc=new Scanner(System.in);
            System.out.print("Enter Age : ");
            int age = sc.nextInt();
            if(age<=0 || age>120){
                throw new InvalidAgeException("Age range must be 1 to 120");
            }
            System.out.println("Age = " + age);
        }
        catch(InvalidAgeException e){
            System.out.println(e.getMessage());
        }
        
    }
}