import java.io.*;
import java.util.Scanner;

public class MultipleValues {
    public static void main(String[] args) {
        try {
            FileOutputStream fout = new FileOutputStream("multi.txt");

            fout.write(64);
            fout.write(65);
            fout.write(66);
            fout.write(67);

            fout.write('X');
            fout.write('Y');
            fout.write('Z');

            Scanner sc = new Scanner(System.in);
            System.out.print("Enter name: ");
            String name = sc.next();

            fout.write(name.getBytes());

            fout.close();

            FileInputStream fin = new FileInputStream("multi.txt");

            int i;
            while((i = fin.read()) != -1) {
                System.out.print((char)i + " ");
            }
            fin.close();
          
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}