import java.io.*;
import java.util.*;

class DataStream {
    public static void main(String args[]) throws IOException {
        DataOutputStream dos = new DataOutputStream(new FileOutputStream("student.dat"));
        DataInputStream dis = new DataInputStream(new FileInputStream("student.dat"));

        dos.writeInt(1);
        dos.writeUTF("Rahul");
        dos.writeDouble(55.11);
        dos.writeChar('A');
        
        System.out.println("Data from file....\n");

        int id = dis.readInt();
        String name = dis.readUTF();
        double marks = dis.readDouble();
        char grade = dis.readChar();

        System.out.println("\n\t" + id + "\t" + marks + "\t" + grade);

    }
}