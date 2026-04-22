public class NestedTypeDemo {
    public static void main(String []args) {
            try{
                int arr[] = {10, 20, 30};

                try{
                    System.out.println(arr[5]);
                }
                catch(NumberFormatException e){
                    System.out.println("Inner Catch: Invalid Index");
                }

                int result = 10 / 0;
            }
            catch(ArithmeticException e) {
                System.out.println("Outer Catch: Division by zero");
            }
            // catch(ArrayIndexOutOfBoundsException e) {
            //     System.out.println("Outer Catch: Array Index out of bounds.."+e);
            //     System.out.println("Outer Catch: "+e.getMessage());
            // }
            finally{
                System.out.println("Program End");
            }
    }    
}
