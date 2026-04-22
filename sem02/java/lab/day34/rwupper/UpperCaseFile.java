import java.io.*;

public class UpperCaseFile {
    public static void main(String[] args) {
        try {
            BufferedReader br = new BufferedReader(new FileReader("input.txt"));
            BufferedWriter bw = new BufferedWriter(new FileWriter("output.txt"));

            String line;

            while((line = br.readLine()) != null) {
                bw.write(line.toUpperCase());
                bw.newLine();
            }
            br.close();
            bw.close();
            System.out.println("File Writed in Uppercase successfully!");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}