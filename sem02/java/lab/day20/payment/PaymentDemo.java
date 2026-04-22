interface Payment{
    public void pay(double amount);
}

abstract class Transaction {
    public abstract void transactionDetails();
}

class CreditCard extends Transaction implements Payment {
    String cardNumber;
    CreditCard(){}; // Default constructor
    
    CreditCard(String cardNumber) { // Parametrized constructor
        this.cardNumber = cardNumber;
    }

    public void transactionDetails(){
        System.out.println("\t\tPayment through Credit Card");
    }
    
    public void pay(double amount){
        System.out.println("\t\tCredit Card paid amount:"+amount);
    }
}
class UPI extends Transaction implements Payment {
    String upiId;
    UPI(){}; // Default constructor
    
    UPI(String upiId) { // Parametrized constructor
        this.upiId = upiId;
    }

    public void transactionDetails(){
        System.out.println("\t\tPayment through UPI");
    }
    
    public void pay(double amount){
        System.out.println("\t\tUPI paid amount:"+amount);
    }
}

public class PaymentDemo {
    public static void main(String args[]) {
        CreditCard cc = new CreditCard("121212121");
        cc.transactionDetails();
        cc.pay(1000);

        UPI u = new UPI("fsfsdfs2121");
        u.transactionDetails();
        u.pay(121);
    }
}