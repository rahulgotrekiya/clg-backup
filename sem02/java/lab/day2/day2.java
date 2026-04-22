import java.util.Scanner;
import java.lang.Math.*;
public class day2
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        // int num,num2,num3;
        // System.out.println("Enter Number : ");
        // num=sc.nextInt();
        // System.out.println("Enter Number : ");
        // num2=sc.nextInt();
        // System.out.println("Enter Number : ");
        // num3=sc.nextInt();

        // if(num>num2 && num>num3)
        //     System.out.println("MAX is : "+num);
        // else if(num2>num && num2>num3)
        //     System.out.println("Max is : "+num2);
        // else    
        //     System.out.println("Max is : "+num3);

        // String name;
        // System.out.println("Enter Your Name : ");
        // name = sc.nextLine();
        // System.out.println("Name : "+name);

        System.out.println("Enter Number : ");
        int num=sc.nextInt();

        // Static Pattern Printing
        // for(int i=1;i<=4;i++)
        // {
        //     for(int j=1;j<=i;j++)
        //     {
        //         System.out.print("*");
        //     }
        //     System.out.println();
        // }


        // Dynamic Pattern Printing
        // System.out.println("Enter N : ");
        // int n=sc.nextInt();

        // for(int i=1;i<=n;i++)
        // {
        //     for(int j=1;j<=i;j++)
        //     {
        //         System.out.print("*");
        //     }
        //     System.out.println();
        // }

        // int flag=1;

        // if(num<2)
        //     flag=1;
        // else
        // {
        //     for(int i=2;i<=num/2;i++){
        //         if(num%i==0)
        //         {
        //             System.out.println(num+" Is Not Prime");
        //             flag=0;
        //             break;
        //         }
        //     }
        // }

        // if(flag==1)
        //     System.out.println(num +" Is Prime");

        // Armstrong
        // isArmstrong(num);

        // First n number sum
        int sum=num*(num+1)/2;
        System.out.println("Sum of First N Numbers is : "+sum);

        int rev=0,temp=num;
        while(temp>0){
            rev = rev * 10 + (temp%10);
            temp/=10;
        }
        System.out.println("Reverse of Number : "+rev);

    }

    // static void isArmstrong(int num){
    //     int sum=0,temp,digit,length;
    //     temp=num;
    //     length=getLength(num);
    //     while(temp>0){
    //         digit=temp%10;
    //         //sum+=digit*digit*digit;
    //         sum+=Math.pow(digit,length);
    //         temp/=10;
    //     }
    //     if(sum==num)
    //         System.out.println(num + " Is Armstong..");
    //     else
    //          System.out.println(num + " Not Is Armstong..");
    // }

    // static int getLength(int num)
    // {
    //     int len=0,temp;
    //     temp=num;
    //     while(temp>0){
    //         len++;
    //         temp/=10;
    //     }
    //     return len;
    // }
}