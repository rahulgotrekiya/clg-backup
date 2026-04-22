import java.io.*;
import java.util.Scanner;

public class MergeFiles {
    public static void main(String[] args) {
        try {

            FileOutputStream fout1 = new FileOutputStream("file1.txt");

            Scanner sc = new Scanner(System.in);
            System.out.print("Enter File 1 data: ");
            String data = sc.next();

            fout1.write(data.getBytes());  
            
            fout1.close();

            FileOutputStream fout2 = new FileOutputStream("file2.txt");

            System.out.print("Enter File 2 data: ");
            data = sc.next();

            fout2.write(data.getBytes());
            
            fout2.close();

            FileInputStream fin1 = new FileInputStream("file1.txt");
            FileInputStream fin2 = new FileInputStream("file2.txt");
            FileOutputStream fout = new FileOutputStream("merged.txt");

            int i;
            while((i = fin1.read()) != -1) {
                fout.write(i);
            }

            while((i = fin2.read()) != -1) {
                fout.write(i);
            }

            fin1.close();
            fin2.close();
            fout.close();

            System.out.println("File Merged successfully!");
          
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}