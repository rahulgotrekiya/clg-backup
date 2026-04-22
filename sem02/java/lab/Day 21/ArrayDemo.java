import java.util.*;
public class ArrayDemo
{
    public static void main(String args[])
    {
        try{
            Scanner sc = new Scanner(System.in);
            System.out.print("Enter Array Size : ");
            int size = sc.nextInt();
            int arr[] = new int[size];
            int sum=0;

            for(int i=0;i<size;i++){
                System.out.print("Enter Array Element : ");
                arr[i] = sc.nextInt();
            }
            for(int i=0;i<size;i++){
                sum+=arr[i];
                System.out.println(arr[i]);
            }
            System.out.println("\n Sum : " + sum);
        }
        catch(NegativeArraySizeException e){
            System.out.println("Array Size Cannot be Negative : "+e);
        }
        catch(InputMismatchException e)
        {
            System.out.println("Input must be an Integer : "+e);
        }
        catch(ArrayIndexOutOfBoundsException e){
            System.out.println("\n Only 2 Values to be passed : "+e);
        }
        catch(Exception e){
            System.out.println("\n Error : "+e);
        }
    }
}