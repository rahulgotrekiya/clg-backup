interface Tax
{
	public double calculateTax();
}
interface Insurance
{
    public double calculateInsurance();
}
abstract class Person
{
    String name;
    double income;

    Person(String name,double income){
        this.name = name;
        this.income = income;
    }
	abstract void display(); // Abstract class abstract method
}
class SalariedPerson extends Person implements Tax,Insurance
{
    SalariedPerson(String name,double income)
    {
        super(name,income);
    }
    public double calculateTax()
    {
        return income*0.10;
    }
    public double calculateInsurance(){
        return income*0.05;
    }
    void display(){
        System.out.println("\n\t Salaried Person Details");
        System.out.println("\n\t NAME : "+name);
        System.out.println("\n\t INCOME : "+income);
        System.out.println("\n\t TAX : "+calculateTax());
        System.out.println("\n\t INSURANCE : "+calculateInsurance());
    }
}
class BusinessPerson extends Person implements Tax,Insurance
{
    BusinessPerson(String name,double income)
    {
        super(name,income);
    }
    public double calculateTax()
    {
        return income*0.15;
    }
    public double calculateInsurance(){
        return income*0.08;
    }
    void display(){
        System.out.println("\n\t Salaried Person Details");
        System.out.println("\n\t NAME : "+name);
        System.out.println("\n\t INCOME : "+income);
        System.out.println("\n\t TAX : "+calculateTax());
        System.out.println("\n\t INSURANCE : "+calculateInsurance());
    }
}
public class PracPro4
{
	public static void main(String args[])
	{
		SalariedPerson sal = new SalariedPerson("Raju Rastogi",150000);
        sal.display();
        System.out.println("----------------------------------------------------");
        BusinessPerson bus = new BusinessPerson("Ranchhoddas Chanchad",270000);
        bus.display();
	}
}