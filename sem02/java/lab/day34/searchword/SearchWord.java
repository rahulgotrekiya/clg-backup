import java.io.*;
import java.util.Scanner;

public class SearchWord {
    public static void main(String[] args) {
        try {
            BufferedReader br = new BufferedReader(new FileReader("input.txt"));

            String line;

            Scanner sc = new Scanner(System.in);
            System.out.print("Enter Word: ");
            String word = sc.next();
            int count = 0;

            while((line = br.readLine()) != null) {
                if(line.contains(word)) {
                    count++;
                }
            }
            br.close();
            System.out.println("Word Fount " + count + " times.");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}