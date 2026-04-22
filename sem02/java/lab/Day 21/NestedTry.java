public class NestedTry
{
    public static void main(String args[])
    {
        try{
            int arr[] = {10,20,30}; // Size is 3
            try{
                //System.out.println(5/0);
                System.out.println(arr[5]);
            }
            catch(NumberFormatException e){
                System.out.println("Inner Catch : Invalid Index");
            }
            catch(ArithmeticException e){
                System.out.println("Can't Divide by 0");
            }
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println("Outer Catch : Array Index Out OF Bounds.." + e);
            System.out.println("Outer Catch : Array Index Out OF Bounds.." + e.getMessage());
        }
        finally{
            System.out.println("Program End");
        }
    }
}