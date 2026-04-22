import java.util.*;
class InvalidAgeException extends Exception {
    InvalidAgeException(String msg){
        super(msg);
    }
}

class CustomException {
        public static void main(String args[]){
            try {
            
                Scanner sc = new Scanner(System.in);
                System.out.print("Enter Age:");
                int age = sc.nextInt();
            
                if(age <= 0 || age >= 120) {
                    throw new InvalidAgeException("Age can't be Nagative or more than 120 years....");
                }
                else {
                    System.out.println("Age: " + age);
                }
            }
            catch (InvalidAgeException e) {
                System.out.println("Exception: " + e.getMessage());
            }
        }

    
}