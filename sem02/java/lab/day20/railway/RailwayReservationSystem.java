
interface Reservable {
    public abstract void reserveTicket();   // abstract method
}

interface Cancellable {
    public abstract void cancelTicket();   // abstract method
}

abstract class Passenger {
    String name;
    int age;
    String gender;

    Passenger(){} // Default constroctor
    Passenger(String name, int age, String gender){  // parameterized constroctor
        this.name = name;
        this.age = age;
        this.gender = gender;
    }

    public abstract void displayDetails();  // abstract method
}

class GenderPassenger extends Passenger implements Reservable, Cancellable {
    int seatNumber;
    String coachType;

    GenderPassenger(){}  // Default constroctor
    GenderPassenger(String name, int age, String gender, int seatNumber, String coachType){   //  parameterized constroctor
        super(name, age, gender);
        this.seatNumber = seatNumber;
        this.coachType = coachType;
    }

    public void displayDetails(){
        System.out.println("\t\tName: " + name);
        System.out.println("\t\tAge: " + age);
        System.out.println("\t\tGender: " + gender);
        System.out.println("\t\tSeat Number: " + seatNumber);
        System.out.println("\t\tCoach Type: " + coachType);
    }
    public void reserveTicket() {
        System.out.println("\t\tTicket Reserved Successfully (General Class)\n\n");
    }
    public void cancelTicket(){
        System.out.println("\t\tTicket Cancelled Successfully\n\n");
    }
}

class TatkalPassenger extends Passenger implements Reservable, Cancellable {

    int seatNumber;
    double extraCharges;

    TatkalPassenger(){};
    TatkalPassenger(String name, int age, String gender, int seatNumber, double extraCharges){   //  parameterized constroctor
        super(name, age, gender);
        this.seatNumber = seatNumber;
        this.extraCharges = extraCharges;
    }

    public void displayDetails(){
        System.out.println("\t\tName: " + name);
        System.out.println("\t\tAge: " + age);
        System.out.println("\t\tGender: " + gender);
        System.out.println("\t\tSeat Number: " + seatNumber);
        System.out.println("\t\tExtra Charges: " + extraCharges);
    }
    public void reserveTicket() {
        System.out.println("\t\tTicket Reserved under Tatkal quota");
    }
    public void cancelTicket(){
        System.out.println("\t\tTicket Cancelled Successfully\n\n");
    }
}

public class RailwayReservationSystem {
    public static void main(String [] args) {
        GenderPassenger gp = new GenderPassenger("Rahul", 25, "Male", 99, "Sleeper");

        gp.displayDetails();
        gp.reserveTicket();

        TatkalPassenger tp = new TatkalPassenger("Priya", 30, "Female", 12, 300);

        tp.displayDetails();
        tp.reserveTicket();
    }
}