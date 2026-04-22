interface Payment
{
	public void pay(double amount); // Interface abstract method
}
abstract class Transaction
{
	abstract void transactionDetails(); // Abstract class abstract method
}
class CreditCard extends Transaction implements Payment
{
	String cardNumber;
	CreditCard(){}; //default constructor
	CreditCard(String cardNumber)
	{
		this.cardNumber = cardNumber;
	}
	public void pay(double amount)
	{
		System.out.println("\n\t Credit Card No : " + cardNumber +" Paid Amount : " + amount);
	}
	void transactionDetails()
	{
		System.out.println("\n\t Payment through CreditCard");
	}
}
class UPI extends Transaction implements Payment
{
	String upiId;
	UPI(){}; //default constructor
	UPI(String upiId)
	{
		this.upiId = upiId;
	}
	public void pay(double amount)
	{
		System.out.println("\n\t UPI paid amount : " + amount); // overriding pay method
	}
	void transactionDetails()
	{
		System.out.println("\n\t Payment through UPI"); // overriding transactionDetails
	}
}
public class PracPro3
{
	public static void main(String args[])
	{
		CreditCard creditCard = new CreditCard("12345");
		creditCard.transactionDetails();
		creditCard.pay(2500);
		
		UPI upi = new UPI("1001");
		upi.transactionDetails();
		upi.pay(500);
	}
}