/*
    3	AIRLINE RESERVATION SYSTEM

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

import java.util.*;

class SeatNotAvailableException extends Exception {
    SeatNotAvailableException(String msg){
        super(msg);
    }
}

interface Reservation {
    public void bookTicket(int seats) throws SeatNotAvailableException;
    public void cancelTicket(int seats);
}

abstract class Flight {
    String flightNumber, destination;
    int availableSeats;

    Flight(){}; // Default constructor 
    
    Flight(String flightNumber, String destination, int availableSeats){    // Parameterised constructor 
        this.flightNumber = flightNumber;
        this.destination = destination;        
        this.availableSeats = availableSeats;        
    }

    abstract public void display();
}

class DomesticFlight extends Flight implements Reservation {

    DomesticFlight(String flightNumber, String destination, int availableSeats){    // Parameterised constructor 
        super(flightNumber, destination, availableSeats);
    }

    public void bookTicket(int seats) throws SeatNotAvailableException {
        availableSeats -= seats;
        System.out.println("\n\n\t" + seats + " booked Successfully !");
        // if(super.seats > super.availableSeats){
        //     throw SeatNotAvailableException("Seat not available!!!");
        // }
        // else {
        //     System.out.println("Available Seats are: " + super.availableSeats);
        // }
    }

    public void cancelTicket(int seats) {
        availableSeats += seats;
        System.out.println("\n\n\t" + seats + " Cancelled Successfully !");
        
    }

    public void display(){
        System.out.println("\n\n\tFlight Number: " + flightNumber);
        System.out.println("\n\n\tDestination: " + destination);
        System.out.println("\n\n\tAvailable Seats: " + availableSeats);
    }
}


class AirlineDemo{
    public static void main(String [] args){
        DomesticFlight df = new DomesticFlight;
        
    }
}