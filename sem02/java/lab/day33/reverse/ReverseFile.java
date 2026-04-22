import java.io.*;

public class ReverseFile {
    public static void main(String[] args) {
        try {
            BufferedReader br = new BufferedReader(new FileReader("input.txt"));
            StringBuilder sb = new StringBuilder(); 
            String line;

            // Read file
            while((line = br.readLine()) != null) {
                sb.append(line).append('\n');
            }
            br.close();

            // Reverse content
            sb.reverse();

            // Write to output file
            BufferedWriter bw = new BufferedWriter(new FileWriter("output.txt"));
            bw.write(sb.toString());
            bw.close();

            System.out.println("File reversed successfully!");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}