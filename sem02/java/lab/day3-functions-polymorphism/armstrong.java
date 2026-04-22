import java.util.Scanner;

public class armstrong {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Number: ");
        int num=sc.nextInt();

        armstrong c = new armstrong();


		if (c.isArmstrong(num)) {
            System.out.println(num + " Is Armstong..");
        }   
        else {
            System.out.println(num + " Not Is Armstong..");
        }
    }

    public boolean isArmstrong(int n) {
        int sum = 0, temp = n;
        while (n > 0) {
            int r =  n % 10;
            sum += r * r * r;
            n /= 10;
        }
        return (sum == temp);
    }
}