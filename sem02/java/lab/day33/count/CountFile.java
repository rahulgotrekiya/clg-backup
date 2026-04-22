import java.io.*;

class CountFile {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new FileReader("CountFile.java"));
        String line;
        int charCount = 0, wordCount = 0, lineCount = 0;

        while((line = br.readLine()) != null){
            lineCount++;
            charCount += line.length();
            wordCount += line.split("\\s+").length;
        }
        br.close();

        System.out.println("Lines: " + lineCount);
        System.out.println("Words: " + wordCount);
        System.out.println("Characters: " + charCount);
    }
}