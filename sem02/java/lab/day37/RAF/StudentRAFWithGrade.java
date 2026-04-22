import java.io.*;
import java.util.*;

class StudentRAFWithGrade {
    public static void main(String [] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        RandomAccessFile file = new RandomAccessFile("student.dat", "rw");

        System.out.print("Enter number of students: ");
        int n = sc.nextInt();

        // ---------------------
        // Writing records
        for(int  i = 0; i<n; i++){
            System.out.print("\nEnter details of student " + (i + 1));

            System.out.print("\nEnter ID: ");
            int id  = sc.nextInt();

            System.out.print("\nEnter Name: ");
            String name  = sc.next();

            System.out.print("\nEnter Marks: ");
            double marks  = sc.nextDouble();

            System.out.print("\nEnter Grade: ");
            char grade  = sc.next().charAt(0);

            file.writeInt(id);
            file.writeUTF(name);
            file.writeDouble(marks);
            file.writeChar(grade);
        }


        // ---------------------
        // Reading records

        file.seek(0);
        System.out.println("\nStudent Records:");

        while (file.getFilePointer() < file.length()) {
            int id = file.readInt();
            String name = file.readUTF();
            double marks = file.readDouble();
            char grade = file.readChar();

            System.out.println(id + "\t" + name + "\t" + marks + "\t" + grade);
        } 

        // ---------------------
        // Finding records

        file.seek(0);

        System.out.print("Enter Student ID for search: ");
        int searchId = sc.nextInt();

        boolean found = false;

        while(file.getFilePointer() < file.length()) {
            int id = file.readInt();
            String name = file.readUTF();
            double marks = file.readDouble();
            char grade = file.readChar();      

            if(id == searchId) {
                System.out.println(id + " " + name + " " + marks + " " + grade);
                found = true;
            }
        }

        if(!found) {
            System.out.println("\n\t" + searchId + " Not Found...!\n");
        }

        // ---------------------
        // Updating records
        file.seek(0);
    
        file.readInt();
        file.readUTF();

        System.out.print("Enter New marks fro first Student: ");
        double newMarks = sc.nextDouble();

        file.writeDouble(newMarks);

        /***************************/
        // int recordsize = Integer.BYTES + name.length() + Double.BYTES + Character.BYTES;

        System.out.print("\nAfter Modification: ");

        while(file.getFilePointer() < file.length()) {
            int id = file.readInt();
            String name = file.readUTF();
            double marks = file.readDouble();
            char grade = file.readChar();      

            System.out.println(id + "\t" + name + "\t" + marks + "\t" + grade);
            
            int recordsize = Integer.BYTES + name.length() + Double.BYTES + Character.BYTES;

        }
        System.out.print("\n\t\t\tRecord size: " + recordsize);
        System.out.print("\n\t\t\tFile size: " + file.length());

        file.close();
        sc.close();
    }
}