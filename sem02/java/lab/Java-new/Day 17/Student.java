public class Student
{
    int id;
    String name;

    Student(int i,String n)
    {
        id = i;
        name = n;
    }
    void display(Student s)
    {
        System.out.println(s.id + " "+s.name);
    }
    public static void main(String args[])
    {
        Student s1 = new Student(101,"Amit");
        Student s2 = new Student(102,"Raj");
        s1.display(s1);
        s2.display(s2);
    }
}