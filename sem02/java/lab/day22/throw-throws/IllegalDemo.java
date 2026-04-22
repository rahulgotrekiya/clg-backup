// Write a java prog to read from user using scanner calss throw an IllegalArgumentExceptionDemo  if lenghth of string(password) is less than 6

import java.util.Scanner;
public class IllegalDemo {
    public static void main(String [] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Password: ");
        String password = sc.next();

        try{
            if(password.length() < 6) throw new IllegalArgumentException("Password Length must be grater than 6");
            
            System.out.println("Password: " + password);

        } catch (IllegalArgumentException e){
            System.out.println("IllegalArgumentException: " + e.getMessage());
        }
    }
}