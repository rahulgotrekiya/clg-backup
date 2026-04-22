import java.io.File;
import java.util.*;

public class CreateSubFolder {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("\n\tEnter Folder name: ");
        String mainFolder = sc.next();

        // Create the main library folder
        File folder = new File(mainFolder);
        if (!folder.exists()) {
            if (folder.mkdir()) {
                System.out.println("Library folder '" + mainFolder + "' created successfully.");
            } else {
                System.out.println("Failed to create library folder.");
                return;
            }
        } else {
            System.out.println(mainFolder + " folder already exists.");
        }

        String[] subFolderNames = {"Div_A", "Div_B", "Div_C", "Div_D", "Div_E"};

        for(String subFolder : subFolderNames){
            File fs = new File(mainFolder + '/' + subFolder);
            if(!fs.exists()){
                if(fs.mkdir()){
                    System.out.println("Section folder '" + subFolderNames + "' created successfully.");
                } else {
                    System.out.println("Failed to create section folder: " + subFolderNames);
                }
            } else {
                System.out.println("Section folder '" + subFolderNames + "' already exists.");
            }
        }
    }
}