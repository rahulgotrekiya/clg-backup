import java.io.*;

public class MergeFiles {
    public static void main(String[] args) {
        try {
            BufferedWriter bw = new BufferedWriter(new FileWriter("output.txt"));

            BufferedReader br1 = new BufferedReader(new FileReader("A.txt"));
            BufferedReader br2 = new BufferedReader(new FileReader("B.txt"));

            String line;

            while((line = br1.readLine()) != null) {
                bw.write(line);
                bw.newLine();
            }

            while((line = br2.readLine()) != null) {
                bw.write(line);
                bw.newLine();
            }

            br1.close();
            br2.close();
            bw.close();
            
            System.out.println("Files Merged successfully!");
        }
        catch (IOException e) {
            e.printStackTrace();
        }
    }
}