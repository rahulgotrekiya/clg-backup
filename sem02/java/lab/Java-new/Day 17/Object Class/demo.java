import java.util.Scanner;
public class demo
{
    int mobile;
    @Override
    public int hashCode()
    {
        return (this.mobile+1)*4/7;
    }
    public static void main(String args[])
    {
        demo d = new demo();
        Scanner sc = new Scanner(System.in);
        d.mobile = sc.nextInt();

        System.out.println("Encrypted : " + d.hashCode());
        String s = String.valueOf(d.hashCode());
    
        if(s.length()%2==0)
            System.out.println("Hashcode is Even");
        else
            System.out.println("Hashcode is Odd");
    }
}