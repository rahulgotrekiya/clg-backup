import java.util.Scanner;
public class calc
{
    public static void main(String args[])
    {  
        Scanner sc=new Scanner(System.in);

        System.out.print("Enter Number 1: ");
        int num1=sc.nextInt();

        System.out.print("Enter Number 2: ");
        int num2=sc.nextInt();

        System.out.println("1. Addition");
        System.out.println("2. Subtraction");
        System.out.println("3. Multiplication");
        System.out.println("4. Division");

        System.out.print("Enter Your Choice ");
        int ch = sc.nextInt();

        calc c = new calc();

        switch(ch) {
            case 1: {
                System.out.println("Addition: " + c.add(num1, num2));
                break;
            }
            case 2: {
                System.out.println("Subtraction: " + c.sub(num1, num2));
                break;
            }
            case 3: {
                System.out.println("Multiplication: " + c.mult(num1, num2));
                break;
            }
            case 4: {
                System.out.println("Division: " + c.div(num1, num2));
                break;
            }
            default: {
                System.out.println("Please Select the Appropriate operator!!!");
                break;
            }
        }
    }
    
    public int add(int a, int b) {
        return (a + b);
    }

    public int sub(int a, int b) {
        return (a - b);
    }

    public int mult(int a, int b) {
        return (a * b);
    }

    public int div(int a, int b) {
        return (a / b);
    } 
}