import java.io.File;
import java.util.*;

public class CreateFolder {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("\n\tEnter Folder name: ");
        String folderName = sc.next();

        // Create a folder object
        // File folder = new File("c:\\abc");  //for path
        File folder = new File(folderName);


        // Check if the folder already exists
        if(!folder.exists()) {
            // Create the directory
            if(folder.mkdirs()){
                System.out.println("Folder '" + folderName + "' created Successfully!");
            } else {
                System.out.println("Failed tor create the folder.");

            }
        } else {
            System.out.println("Folder already exists.");
        }

    }
}