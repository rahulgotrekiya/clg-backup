public class Student
{
    String name = "Vishnu";
    int age = 21;

    @Override
    public String toString()
    {
        return "Student{name='" + name +"',age='"+age+"'}";
    }
    public static void main(String args[])
    {
        Student s = new Student();
        System.out.println(s.toString());
    }
}