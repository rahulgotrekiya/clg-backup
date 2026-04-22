import java.util.*;

class InvalidMarksException extends Exception {
    InvalidMarksException (String msg) {
        super(msg);
    }
}

interface Exam {
    public void enterMarks(int marks) throws InvalidMarksException;
    public void calculateGrade();
}

abstract class Person {
    private int id;
    protected String name;
    public final String collegeName = "ABC College";

    Person(){};     // Default Constructor
    Person(int id, String name){     // Parameterized Constructor
        this.id = id;
        this.name = name;
    }

    public int getId(){
        return id;
    }
    public String getName(){
        return name;
    }
    public abstract void display();
}


class Student extends Person implements Exam {
    private int marks;
    private String grade;

    Student(){};    // Default constructor
    Student(int id, String name){ // Parametrized constructor
        super(id, name);
    }

    public void display(){
        System.out.println("\n\t\tCollege Name: " + collegeName);
        System.out.println("\t\tStud Id: " + getId());
        System.out.println("\t\tName: " + getName());
        System.out.println("\t\tmarks: " + marks);
        System.out.println("\t\tgrade: " + grade);
  
    }

    public void enterMarks(int marks) throws InvalidMarksException {
        if(marks < 0 || marks > 100) {
            throw new InvalidMarksException("Invalid Marks !!!");
        }
        else {
            this.marks = marks;
            System.out.println("\n\t\tMarks Set Successfully !");
        }
    }

    public void calculateGrade(){
        if(marks >= 90) {
            grade = "A";
        }
        else if (marks >= 75) {
            grade = "B";
        }       
        else if (marks >= 50) {
            grade = "C";
        }
        else {
            grade = "Faill";
        }
        System.out.println("\n\t\tYour grade is: " + grade);
    }
}

class CollegeDemo {
    public static void main(String args[]) {
        int ch;

        Scanner sc = new Scanner(System.in);

        System.out.print("\tEnter Id:");
        int id = sc.nextInt();
        System.out.print("\tEnter name:");
        String name = sc.next(); 
        
        Student stu = new Student(id , name);

        do {
            System.out.print("\n\t1. Enter Marks. \n\t2. Calculate Grades. \n\t3. Display Students. \n\t4. Exit. \n\tEnter Your Choice:");
            ch = sc.nextInt();
            switch(ch) {
                case 1:
                    System.out.print("\tEnter Marks:");
                    int marks = sc.nextInt();   
                    try {
                        stu.enterMarks(marks);
                    }
                    catch (InvalidMarksException e){
                        System.out.println("Exception: " + e.getMessage());
                    }
                break;
                case 2: stu.calculateGrade(); break;
                case 3: stu.display(); break;
                case 4:
                    System.exit(0);
                break;
                default:
                    System.out.println("\t\tInvalid Choice!");
            }
        } while(true);
    }
}
