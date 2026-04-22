import java.io.File;
import java.util.Scanner;

public class DeleteFile {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("\n\tEnter File name for delete: ");
        String FileName = sc.next();

        File file = new File(FileName);

        // Check if the file exists before deleting
        if (file.exists()) {
            // Attempt to delete the file
            if (file.delete()) {//delete existing file
                System.out.println(file.getName() +" file deleted successfully.");
            } else {
                System.out.println("Failed to delete file .");
            }
        } else {
            System.out.println("The file does not exist.");
        }
    }
}
