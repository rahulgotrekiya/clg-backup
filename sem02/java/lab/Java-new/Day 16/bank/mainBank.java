abstract class Bank {
    int accountNumber;
    String accountHolderName;
    int balance;
    final String bankName = "ABC bank";

    Bank(int accountNumber, String accountHolderName, int balance) {
        this.accountNumber = accountNumber;
        this.accountHolderName = accountHolderName;
        this.balance = balance;
    }

    void deposit(int amount){
        balance = balance + amount;
        System.out.println("Deposit :"+amount);
        System.out.println("after Deposit :"+balance);

    }

    final void withdraw(int amount){
        balance = balance - amount;
        System.out.println("Withdraw  :"+amount);
        System.out.println("Withdraw  :"+balance);
    }

    public abstract int calculateInterest();

    void display(){
        System.out.println("Bank Name:"+bankName);
        System.out.println("No :"+accountNumber);
        System.out.println("Holder Name:"+accountHolderName);
        System.out.println("Balance:"+balance);
    }
}

class SavingsAccount extends Bank{
    int interestRate;

    SavingsAccount(int accountNumber, String name, int balance, int rate){
       super(accountNumber, name, balance);
       interestRate = rate;
    }

    @Override
    public int calculateInterest() {
        // System.out.println("Interest is:" +amount * interestRate * 0.10);
        return balance * interestRate / 100;
    }
}

class CurrentAccount extends Bank {
    int overdraftLimit;

    CurrentAccount(int accountNumber, String name, int balance, int limit){
       super(accountNumber, name, balance);
       overdraftLimit = limit;
    }

    // @Override
    // public int calculateInterest() {
    //     // System.out.println("Interest is:" + amount * interestRate * 0.10);
    //     return 0;
    // }
}

public class mainBank {
    public static void main(String[] args) {
        SavingsAccount s = new SavingsAccount(101, "Rahul", 10000, 10);
        s.display();
        s.deposit(1500);
        System.out.println("Interest: " + s.calculateInterest());
    }
}