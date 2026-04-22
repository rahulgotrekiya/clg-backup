public class school
{
    public static void main(String args[])
    {
        school sc = new school();
        sc.displayStudents();
    }
    void displayStudents()
    {
        class Student
        {
             String studentName="Cristiano Messi";
             int studentGrade=10;
            
             void display(){
                System.out.println("Name : "+studentName);
                System.out.println("Grade : "+studentGrade);
             }
        }
        Student std = new Student();
        std.display();
    }
}