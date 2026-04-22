// Custom Exception: InvalidAgeException
// Extends: Exception
// Used when age is less than 18.
// Class: Voter
// Variables: name, age
// Method:
// checkEligibility() throws InvalidAgeException
// → If age < 18, throw exception
// → Otherwise print "Eligible to vote"
// Main Class: VotingDemo
// Accepts age from user
// Calls checkEligibility() inside try-catch

import java.util.*;

class InvalidAgeException extends Exception {
    InvalidAgeException(String msg) {
        super(msg);
    }
}

class Voter {
    String name;
    int age;

    Voter(){}; // Default constructor 
    Voter(String name, int age){    // Parameterised constructor 
        this.name = name;
        this.age = age;
    }

    public void checkEligibility() throws InvalidAgeException{ 
        if(age < 18) {
            throw new InvalidAgeException("Not Eligible to vote! Age must be more than 18");
        }
        else {
            System.out.println(" Congratulatins " + name + " Eligible to vote");
        }
    }
}

class VotingDemo {
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Name:");
        String name = sc.nextLine();
    
        System.out.print("Enter Age:");
        int age = sc.nextInt();

        try {
            Voter v = new Voter(name, age);
            v.checkEligibility();
        }
        catch (InvalidAgeException e){
            System.out.println("Exception: " + e.getMessage());
        }
   }
}