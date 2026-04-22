import java.util.Scanner;

class Exam {
   int ticketId;
   String movieName;
   String seatType;
   double price;

   static String theatreName;

   static {
      theatreName = "PVR Cinemas";
      System.out.println("Theatre: " + theatreName);
   }

   Exam(){    // Default constructor
      this.ticketId = 0;
      this.movieName = "Unknown";
      this.seatType = "Regular";
      this.price = 200.0;  
   }

   Exam(int ticketId, String movieName, String seatType, double price){    // Parameterized constructor
      this.ticketId = ticketId;
      this.movieName = movieName;
      this.seatType = seatType;
      this.price = seatType.equals("Premium") ? price * 1.25 : price;
   }


   Exam(Exam other){    // Copy Constructor 
      this.ticketId = other.ticketId;
      this.movieName = other.movieName;
      this.seatType = other.seatType;
      this.price = other.price;
   }

   double calculateBill(int quantity){
      return this.price * quantity;
   }

   Exam updatePrice(double newPrice){
      this.price = newPrice;
      return this;
   }

   void display() {
      System.out.println("ID: " + ticketId + " | Movie: " + movieName + " | Seat: " + seatType + " | Price: " + price);
   }

   public static void main(String args[]) {

      Scanner sc = new Scanner(System.in);
      double num = sc.nextDouble();

      Exam t1 = new Exam();
      t1.display();


      Exam t2 = new Exam(101, "Avengers", "Premium", 400.0);
      t2.display();

      System.out.println("Bill for 3 tickets: " + t2.calculateBill(3));
      
      
      // Copy con
      Exam t3 = new Exam(t2);
      t3.display();

      t1.updatePrice(num).display();
      // Static variable access
      System.out.println("Theatre: " + Exam.theatreName);

   }

}