/*
Interfaces:
Interface: Reservable
Contains method:
•	void reserveTicket();
Used for reserving tickets.

Interface: Cancellable
Contains method:
•	void cancelTicket();
Used for cancelling tickets.

Abstract Class:
Abstract Class: Passenger
Contains abstract method:
•	void displayDetails();
Data Members:
•	String name
•	int age
•	String gender
Acts as a base class for all passengers.
Ensures every passenger must implement the displayDetails() method.

Derived Classes:
1. GeneralPassenger Extends: Passenger Implements: Reservable, Cancellable
Data Members:
•	int seatNumber
•	String coachType
Methods:
•	displayDetails() → Displays passenger information
•	reserveTicket() → Reserves a general class seat // Ticket Reserved Successfully (General Class)
•	cancelTicket() → Cancels the reserved ticket // Ticket Cancelled Successfully


*/
interface Reservable
{
    void reserveTicket();
}
interface Cancellable
{
    void cancelTicket();
}
abstract class Passenger
{
    String name,gender;
    int age;
    Passenger(){}
    Passenger(String name,String gender,int age)
    {
        this.name = name;
        this.gender = gender;
        this.age = age;
    }
    abstract void displayDetails();
}
class GeneralPassenger extends Passenger implements Reservable,Cancellable
{
    int seatNumber;
    String coachType;
    GeneralPassenger(){}
    GeneralPassenger(String name,String gender,int age,int seatNumber,String coachType){
        super(name,gender,age);
        this.seatNumber = seatNumber;
        this.coachType = coachType;
    }
    public void reserveTicket()
    {
        System.out.println("\n\t Ticket Reserved Successfully..(General Class)");
    }
    public void cancelTicket()
    {
        System.out.println("\n\t Ticket Cancelled Successfully..");
    }
    public void displayDetails(){
        System.out.println("\n\t Name : " + name + "\t Gender : " + gender + "\t Age : "+ age);
        System.out.println("\n\t Seat NO : " + seatNumber + "\t Coach Type : " + coachType);
    }
}
class TatkalPassenger extends Passenger implements Reservable,Cancellable
{
    int seatNumber;
    double extraCharge;
    TatkalPassenger(){}
    TatkalPassenger(String name,String gender,int age,int seatNumber,double extraCharge){
        super(name,gender,age);
        this.seatNumber = seatNumber;
        this.extraCharge = extraCharge;
    }
    public void reserveTicket()
    {
        System.out.println("\n\t Ticket Reserved Successfully (Tatkal)");
    }
    public void cancelTicket()
    {
        System.out.println("\n\t Ticket Cancelled (Tatkal Charges May Apply)");
    }
    public void displayDetails(){
        System.out.println("\n\t Name : " + name + "\t Gender : " + gender + "\t Age : "+ age);
        System.out.println("\n\t Seat NO : " + seatNumber + "\t Extra Charge : " + extraCharge);
    }
}
public class PracPro2
{
    public static void main(String args[]){
        GeneralPassenger gp = new GeneralPassenger("Akshay","Male",35,15,"AC");
        gp.reserveTicket();
        gp.displayDetails();
        gp.cancelTicket();

        System.out.println("----------------------------------------------------");

        TatkalPassenger tp = new TatkalPassenger("Akshay","Male",35,02,200);
        tp.reserveTicket();
        tp.displayDetails();
        tp.cancelTicket();

        System.out.println("----------------------------------------------------");
    }
}