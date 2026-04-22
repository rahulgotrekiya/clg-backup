// import java.util.Scanner;
class student
{
    public static void main(String args[])
    {
        student s1 = new student();
        student s2 = new student("Sanket");
        student s3 = new student("Sanket",22);
    }

    student()
    {
       System.out.println("Constructor.....");
    }

    student(String name)
    {
        System.out.println("Your Name : "+ name);
    }

    student(String name,int age)
    {
        System.out.println("Your Name : "+ name);
        System.out.println("Your Age : "+ age);
    }
}

// Constructor.....
// Your Name : Sanket
// Your Name : Sanket
// Your Age : 22