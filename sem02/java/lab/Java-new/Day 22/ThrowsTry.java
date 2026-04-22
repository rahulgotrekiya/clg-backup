import java.util.Scanner;
public class ThrowsTry
{
    public static void main(String[] args)
    {
        try{
            division(10,0);
        }catch(ArithmeticException e){
            System.out.println("Arithmetic Exception : " + e.getMessage());
            e.printStackTrace();
        }
        catch(Exception e){
            System.out.println("Exception : " + e.getMessage());
            e.printStackTrace();
        }
        finally{
            System.out.println("Program Executed..");
        }
    }
    public static void division(int a,int b) throws ArithmeticException
    {
        System.out.println("Division : " + a/b);
    }
}