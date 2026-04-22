import java.io.*;

public class RemoveExtraSpace {
    public static void main(String[] args) {
        try {

            BufferedReader br = new BufferedReader(new FileReader("input.txt"));
            BufferedWriter bw = new BufferedWriter(new FileWriter("output.txt"));

            String line;

            while((line = br.readLine()) != null) {
                bw.write(line.trim().replaceAll("\\s+", " "));
                bw.newLine();
            }

            br.close();
            bw.close();            
            System.out.println("Extra space removed successfully!");
        }
        catch (IOException e) {
            e.printStackTrace();
        }
    }
}