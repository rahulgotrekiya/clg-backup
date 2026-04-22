/*
Interface: Reservation
Methods:
void bookTicket(int seats) throws SeatNotAvailableException;
void cancelTicket(int seats);
Custom Exception: SeatNotAvailableException
Extends: Exception
Used when requested seats exceed available seats.
Abstract Class: Flight
Variables: flightNumber, destination, availableSeats
Constructor: Initialize variables
Abstract Method: void display();
Derived Class: DomesticFlight
Extends: Flight
Implements: Reservation
Methods:
bookTicket() → If seats > availableSeats, throw SeatNotAvailableException
cancelTicket() → Add seats back
display() → Display flight details
Main Class: AirlineDemo
Creates DomesticFlight object
Books ticket using try-catch
Cancels ticket
Displays remaining seats

*/
class SeatNotAvailableException extends Exception
{
    SeatNotAvailableException(String message){
        super(message);
    }
}
interface Reservation
{
    void bookTicket(int seats) throws SeatNotAvailableException;
    void cancelTicket(int seats);
}
abstract class Flight
{
    int flightNumber,availableSeats;
    String destination;

    Flight(int flightNumber,String destination,int availableSeats){
        this.flightNumber = flightNumber;
        this.destination = destination;
        this.availableSeats = availableSeats;
    }
    abstract public void display();
}
class DomesticFlight extends Flight implements Reservation
{
    DomesticFlight(int flightNumber,String destination,int availableSeats)
    {
        super(flightNumber,destination,availableSeats);
    }
    public void bookTicket(int seats) throws SeatNotAvailableException
    {
        if(seats>availableSeats){
            throw new SeatNotAvailableException("Requested Seats Not Available! Try Less No Of Seats");
        }else{
            availableSeats = availableSeats - seats;
            System.out.println("Your " + seats +" Seats are Booked Successfully..");
        }
    }
    public void cancelTicket(int seats)
    {
        availableSeats = availableSeats + seats;
        System.out.println("Your " + seats +" Seats Cancelled!");
    }
    public void display()
    {
        System.out.println("Flight NO : " + flightNumber);
        System.out.println("Destination : " + destination);
        System.out.println("Available Seats : " + availableSeats);
    }
}
public class AirlineDemo{
    public static void main(String args[])
    {
        try{
            DomesticFlight domestic = new DomesticFlight(101,"Mumbai",120);
            domestic.display();
            domestic.bookTicket(140);
            domestic.cancelTicket(3);

            domestic.display();
        }
        catch(SeatNotAvailableException e){
            System.out.println(e.getMessage());
        }
    }
}