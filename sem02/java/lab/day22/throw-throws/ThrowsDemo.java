public class ThrowsDemo {
    static void divide(int a, int b) throws ArithmeticException, NumberFormatException {
        int result = a / b;
        System.out.println("Result: " + result);
    }

    public static void main(String[] args){
        try{
            divide(10, 0);
        } catch(ArithmeticException e) {
            e.printStackTrace();
            System.out.println("Exception: " + e.getMessage());
        } catch(NumberFormatException e) {
            e.printStackTrace();
            System.out.println("Exception: " + e.getMessage());
        }
    }
}