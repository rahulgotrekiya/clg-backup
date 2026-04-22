import java.io.*;
import java.util.*;

class DataStreamScanner {
    public static void main(String args[]) throws IOException {
        DataOutputStream dos = new DataOutputStream(new FileOutputStream("students.dat"));
        DataInputStream dis = new DataInputStream(new FileInputStream("students.dat"));

        int n, id;
        String name;
        Double marks;
        char grade;

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of recods: ");
        n = sc.nextInt();

        for (int i=1;i<=n; i++){
            System.out.print("Enter Id: ");
            id = sc.nextInt();
            dos.writeInt(id);

            System.out.print("Enter Name: ");
            name = sc.next();
            dos.writeUTF(name);

            System.out.print("Enter Marks: ");
            marks = sc.nextDouble();
            dos.writeDouble(marks);

            System.out.print("Enter Grade: ");
            grade = sc.next().charAt(0);
            dos.writeChar(grade);
        }
        dos.close();

        System.out.println("Data from file....\n");

        while(dis.available() > 0) {
            id = dis.readInt();
            name = dis.readUTF();
            marks = dis.readDouble();
            grade = dis.readChar();

            System.out.println("\nId: " + id + "\nName: " + name +  "\nMarks: " + marks + "\nGrade: " + grade + "\n--------------------\n");
        }
        dis.close();
    }
}