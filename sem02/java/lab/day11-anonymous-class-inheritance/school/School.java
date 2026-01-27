public class School {
    public static void main(String args[]){
        School sch = new School();
        sch.displayStudents();
    }
    void displayStudents(){
        class Student{
            String studentName = "Rahul Gotrekiya";
            int studentGrade=13;

            void display() {
                System.out.println("Name: " + studentName);
                System.out.println("Grade: " + studentGrade);
            }
        }
        Student std = new Student();
        std.display();
    }
}