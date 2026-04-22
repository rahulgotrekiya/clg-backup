public class ExceptionDemo
{
    public static void main(String args[])
    {
        try{
            int a = Integer.parseInt(args[0]);
            int b = Integer.parseInt(args[1]);
            System.out.println("\n Division : "+a/b);
        }
        catch(ArithmeticException e){
            System.out.println("\n Cannot be divide by 0 : "+e);
        }
        catch(ArrayIndexOutOfBoundsException e){
            System.out.println("\n Only 2 Values to be passed : "+e);
        }
        catch(Exception e){
            System.out.println("\n Error : "+e);
        }
    }
}