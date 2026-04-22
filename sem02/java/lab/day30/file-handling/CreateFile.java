import java.io.*;
import java.util.*;

public class CreateFile {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("\n\tEnter file name: ");
        String fileName = sc.next();

        // Create a file object
        // File file = new file("c:\\abc.txt");  //for path
        File file = new File(fileName);

        try{
            // Check if the file already exists
            if(file.createNewFile()) {
                System.out.println("File '" + fileName + "' created Successfully!");
            } else {
                System.out.println("File already exists.");
            }
        } catch (IOException e) {
            System.out.println("An Error occured while creating the file.");
        } catch (Exception e) {
            System.out.println("An Error " + e);
        }
    }
}