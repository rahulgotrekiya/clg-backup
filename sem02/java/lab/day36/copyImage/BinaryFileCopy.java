import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class BinaryFileCopy {
    public static void main(String[] args) {
        String sourceFile = "bmw.png";
        String destinationFile = "copied-img.png";

        try  {
            FileInputStream fi = new FileInputStream(sourceFile);
            FileOutputStream fo = new FileOutputStream(destinationFile);

            // Buffer to store bytes
            int bytesRead;

            while ((bytesRead = fi.read()) != -1) {
                fo.write(bytesRead);
            }

            System.out.println("File copied successfully!");

        } catch (IOException e) {
            System.out.println("An error occurred during file copy.");
            //e.printStackTrace();
        }
    }
}

