import java.util.Scanner;
import java.lang.Math.*;

public class Mob{
 
    // @Override
    public int hashCode(int M){
        return (1 + M * 4 )/7;
    }

    public static void main(String[] args){
        
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Mo:");
        int Mo = sc.nextInt();
        

        Mob e = new Mob();
        int ans = e.hashCode(Mo);

        int len=0, temp = ans;
        while(temp >0) {
            len += 1;
            temp /= 10;
        }


        System.out.println("Input No : " + Mo);
        System.out.println("Encripted: " + ans);
        System.out.println("Length of Enc.:" + len);


        if (Mo % 2 == 0) {
            System.out.println(ans + "is Even");
        } else {
            System.out.println(ans + "is Odd");
        }


        if (len % 2 == 0) {
            System.out.println(len + " is Even!");
        } else{
            System.out.println(len + " is Odd!");
        }
        
    }
}