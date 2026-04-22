import java.io.*;

// Program 1: Copy Character by Character
public class CopyFile {
    public static void main(String[] args) {
    
        String source = "original.java";//scan from user
        String destination = "char_copy.txt"; //scan from user
        
		try  {
		
			FileReader fr = new FileReader(source); 
			FileWriter fw = new FileWriter(destination);
            int ch;
			
            while ((ch = fr.read()) != -1) {
				System.out.print((char)ch);//display on screen
                fw.write(ch);
            }
            System.out.println("File copied character by character successfully!");
			fw.close();
			fr.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}

