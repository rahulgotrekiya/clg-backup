// Show method works differently for anonymous class (obj).. While for other objects.. It will work same..
// Same name method should be there to work for other objects as well..
public class day11
{
    public static void main(String args[])
    {
        Demo obj = new Demo(){
            void show(){
                System.out.println("Anonymous Class using Normal Class");
            }
        };
        obj.show();

        //Demo obj2 = new Demo();
        //obj2.show(); // This will throw error bcz its non anonymous class
    }
   
}
class Demo
{
    void show()
    {
        System.out.println("Normal Class Method");
    }
}