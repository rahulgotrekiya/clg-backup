import java.io.*;
import java.util.*;

public class ReadFile {
    public static void main(String[] args) {
        try{
            Scanner sc = new Scanner(System.in);
            System.out.print("\n\tEnter file name: ");
            String fileName = sc.next();

            FileReader fr = new FileReader(fileName);

            int i;
            while((i = fr.read()) != -1) {
                System.out.print((char)i);
            } 

            fr.close();
        } catch (IOException e) {
            System.out.println("An Error occured while creating the file.");
        } catch (Exception e) {
            System.out.println("An Error " + e);
        }
    }
}