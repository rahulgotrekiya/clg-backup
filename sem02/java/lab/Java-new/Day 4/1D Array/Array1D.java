import java.util.Scanner;
import java.lang.Math;
public class Array1D
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        // int std[] = new int[3];
        // std[0]=1;
        // std[1]=2;
        // // std[1]=5; it will overwrite the value
        // std[2]=0;

        //int marks[] = {45,67,46,71,82};

        //System.out.println(std[0]);
        //System.out.println(std[1]);
        //System.out.println(std[2]);

        // for(int i=0;i<3;i++)
        // {
        //     System.out.println(std[i]);
        // }

        /*for(int i=0;i<marks.length;i++)
        {
            System.out.println(marks[i]);
        } */

        int arr[];
        System.out.print("Enter Size of Array : ");
        int size = sc.nextInt();
        int sum=0;

        if(size>0)
        {
            arr=new int[size];
            for(int i=0;i<arr.length;i++)
            {
                System.out.print("Enter Element : ");
                arr[i] = sc.nextInt();
            }
            System.out.println("Elements of Array : ");
            for(int i=0;i<arr.length;i++)
            {
                sum+=arr[i];
                //if(i%2==0)
                    System.out.println(arr[i]);
            }
            System.out.println("Sum of Array = "+sum);
            System.out.println("Average of Array = "+(sum/size));
        }
        else{
            System.out.println("Enter Valid Size..");
        }
    }
}