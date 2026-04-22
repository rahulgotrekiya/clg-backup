public class Geeks
{
    public static void main(String args[])
    {
        Object obj = new String("GeeksForGeeks");
        Class c = obj.getClass();
        System.out.println("Class of object is : " + c.getName());
    }
}