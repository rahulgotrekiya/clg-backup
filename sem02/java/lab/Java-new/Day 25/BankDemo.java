
class InvalidTransactionException extends Exception
{
    InvalidTransactionException(String message)
    {
        super(message);
    }
}
interface Transaction
{
    public void deposit(double amount) throws InvalidTransactionException;
    public void withdraw(double amount) throws InvalidTransactionException;
}
class Account
{
    private int accountNumber;
    protected double balance;
    public String bankName = "National Bank";

    Account(int accountNumber,double balance)
    {
        this.accountNumber = accountNumber;
        this.balance = balance;
    }
    public int getAccountNumber(){
        return accountNumber;
    }
    public double getBalance(){
        return balance;
    }
    public void displayAccount()
    {
        System.out.println("Account NO : " + accountNumber);
        System.out.println("Bank : " + bankName);
        System.out.println("Balance : " + balance);
    }

}
class SavingsAccount extends Account implements Transaction
{
    private double interestRate;
    SavingsAccount(int accNo, double balance, double rate)
    {
        super(accNo,balance);
        this.interestRate=rate;
    }
    public void deposit(double amount) throws InvalidTransactionException
    {
        if(amount<0){
            throw new InvalidTransactionException("Amount Must Be Positive");
        }else{
            balance = balance + amount;
            System.out.println(amount + " Deposited..");
        }
    }
    public void withdraw(double amount) throws InvalidTransactionException
    {
        if(amount<0){
            throw new InvalidTransactionException("Amount Must Be Positive");
        }
        else if(amount>balance){
            throw new InvalidTransactionException("Amount Exceeds your Balance");
        }
        else{
            balance = balance - amount;
            System.out.println(amount + " Withdrawn Successfully..");
        }
    }
    public void addInterest() throws InvalidTransactionException{
        double interest;
        if(balance>0){
            interest = (balance * interestRate) / 100;
            balance += interest;
            System.out.println(interest + " interest Added..");
        }else{
            throw new InvalidTransactionException("Interest Can not be Added on current balance");
        }
    }
    public void displayAccount()
    {
        System.out.println("Account NO : " + accountNumber);
        System.out.println("Bank : " + bankName);
        System.out.println("Balance : " + balance);
        System.out.println("Interest Rate : " + interest);
    }
}
public class BankDemo
{
    public static void main(String args[])
    {
        try{

        }catch(InvalidTransactionException e){
            System.out.println("InvalidTransactionException : " + e.getMessage());
        }
    }
}