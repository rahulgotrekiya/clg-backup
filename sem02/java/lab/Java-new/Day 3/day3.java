// Functions - Methods 
// Class and Object
import java.util.Scanner;
public class day3
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        // System.out.print("Enter number 1 : ");
        // int num1 = sc.nextInt();
        // System.out.print("Enter number 2 : ");
        // int num2 = sc.nextInt();
        // System.out.println("1.Add");
        // System.out.println("2.Sub");
        // System.out.println("3.Mul");
        // System.out.println("4.Div");
        // System.out.println("Enter your Choice : ");
        // int ch = sc.nextInt();

        day3 d = new day3();

        // switch(ch)
        // {
        //     case 1:
        //     System.out.println("Addition : "+ d.add(num1,num2));
        //     break;

        //     case 2:
        //     System.out.println("Subtraction : "+ d.sub(num1,num2));
        //     break;

        //     case 3:
        //     System.out.println("Multification : "+ d.mul(num1,num2));
        //     break;

        //     case 4:
        //     System.out.println("Division : "+ d.div(num1,num2));
        //     break;

        //     default:
        //     System.out.println("Invalid");
        // }

        System.out.print("Enter a number : ");
        int num = sc.nextInt();
        int digits = d.getLength(num);
        d.isArmstrong(num,digits);
    }
    public int add(int n1,int n2)
    {
        return n1+n2;
    }
    public int sub(int n1,int n2)
    {
        return n1-n2;
    }
    public int mul(int n1,int n2)
    {
        return n1*n2;
    }
    public int div(int n1,int n2)
    {
        return n1/n2;
    }
    public void isArmstrong(int num,int len){
        int sum=0,temp,digit;
        temp=num;
        while(temp>0){
            digit=temp%10;
            //sum+=digit*digit*digit;
            sum+=Math.pow(digit,len);
            temp/=10;
        }
        if(sum==num)
            System.out.println(num + " Is Armstong..");
        else
             System.out.println(num + " Is Not Armstong..");
    }

    public int getLength(int num)
    {
        int len=0,temp;
        temp=num;
        while(temp>0){
            len++;
            temp/=10;
        }
        return len;
    }
}