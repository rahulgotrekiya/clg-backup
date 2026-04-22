/*
Custom Exception: InvalidAgeException
Extends: Exception
Used when age is less than 18.
Class: Voter
Variables: name, age
Method:
checkEligibility() throws InvalidAgeException
→ If age < 18, throw exception
→ Otherwise print "Eligible to vote"
Main Class: VotingDemo
Accepts age from user
Calls checkEligibility() inside try-catch


*/
import java.util.*;
class InvalidAgeException extends Exception
{
    InvalidAgeException(String msg){
        super(msg);
    }
}
class Voter
{
    String name;
    int age;

    Voter(String name,int age){
        this.name=name;
        this.age=age;
    }
    void checkEligibility() throws InvalidAgeException{
        if(age<18){
            throw new InvalidAgeException("Age less than 18 not allowed");
        }else{
            System.out.println("Congratulations ! " + name + " You Are Eligible to vote");
        }
    }
}
public class VotingDemo
{
    public static void main(String args[])
    {
        try{
            Scanner sc=new Scanner(System.in);
            System.out.print("Enter Name : ");
            String name = sc.nextLine();
            System.out.print("Enter Age : ");
            int age = sc.nextInt();

            Voter voter = new Voter(name,age);
            voter.checkEligibility();
        }
        catch(InvalidAgeException e){
            System.out.println(e.getMessage());
        }
    }
}