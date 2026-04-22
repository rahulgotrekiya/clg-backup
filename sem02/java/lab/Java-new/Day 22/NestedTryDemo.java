public class NestedTryDemo {
    public static void main(String[] args) {

        try {
            int arr[] = {10, 20, 30}; //3 size

            try {
                System.out.println(arr[5]);//ArrayIndex
            }
            catch (NumberFormatException e) {
			//ArrayIndexOutOfBoundsException
                System.out.println("Inner Catch: Invalid Index");
            }

            int result = 10 / 0;//Arithmetic
        }
        catch (ArrayIndexOutOfBoundsException e) {
		//ArithmeticException
            System.out.println("Outer Catch: Division by zero");
        }
		finally
		{
			System.out.println("Program End");
		}
    }
}