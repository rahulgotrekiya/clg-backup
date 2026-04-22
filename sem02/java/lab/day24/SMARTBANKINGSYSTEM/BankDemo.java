import java.util.*;

class InvalidTransactionException extends Exception {
    InvalidTransactionException (String msg) {
        super(msg);
    }
}

interface Transaction {
    public void deposit(double amount) throws InvalidTransactionException;
    public void withdraw(double amount) throws InvalidTransactionException;
}

class Account {
    private int accountNumber;
    protected double balance;
    public String bankName = "National Bank";

    Account(){};     // Default Constructor
    Account(int accountNumber, double balance){     // Parameterized Constructor
        this.accountNumber = accountNumber;
        this.balance = balance;
    }

    public int getAccountNumber(){
        return accountNumber;
    }
    public double getBalance(){
        return balance;
    }
    public void displayAccount(){
        System.out.println("\n\t\tBank Name: " + bankName);
        System.out.println("\t\tAccount No: " + accountNumber);
        System.out.println("\t\tBalance: " + balance);
    }
}

class SavingsAccount extends Account implements Transaction {

    private double interestRate;

    SavingsAccount(){};    // Default constructor
    SavingsAccount(int accNo, double balance, double rate) { // Parametrized constructor
        super(accNo, balance);
        this.interestRate = rate;
    }

    public void deposit(double amount) throws InvalidTransactionException {
        if(amount < 0) {
            throw new InvalidTransactionException("Invalid Amount !!!");
        }
        else {
            balance += amount;
            System.out.println("\n\t\tAmount added Successfully !");
        }
    }

    public void withdraw(double amount) throws InvalidTransactionException {
        if(amount < 0 || amount > balance) {
            throw new InvalidTransactionException("Invalid Amount !!!");
        }
        else {
            balance -= amount;
            System.out.println("\n\t\tAmount Withdrwed Successfully !");
        }
    }

    public void addInterest() {
        
    }

}

class BankDemo {
    public static void main(String args[]){}
}