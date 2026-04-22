interface Tax {
    public double calculateTax(double income);
}

interface Insurance {
    public double calculateInsurance(double income);
}

abstract class Person {
    String name;
    double income;

    Person(){};
    Person(String name, double income){
        this.name = name;
        this.income = income;
    }

    public abstract void display();
}

class SalariedPerson extends Person implements Tax, Insurance {
    
    SalariedPerson(){};
    
    SalariedPerson(String name, double income){
        super(name, income);
    }

    public void display(){
        System.out.println("\t\tSalaried Person Details...");
        System.out.println("\t\tName: " + name);
        System.out.println("\t\tIncome: " + income);
    }

    public double calculateTax(double income){
        return income * 0.10;
    }

    public double calculateInsurance(double income) {
        return income * 0.05;
    }
}


class BusinessPerson extends Person implements Tax, Insurance {
    
    BusinessPerson(){};
    
    BusinessPerson(String name, double income){
        super(name, income);
    }

    public void display(){
        System.out.println("\t\tSalaried Person Details...");
        System.out.println("\t\tName: " + name);
        System.out.println("\t\tIncome: " + income);
        System.out.println("\t\tIncome: " + income);
    }

    public double calculateTax(double income){
        return income * 0.15;
    }

    public double calculateInsurance(double income) {
        return income * 0.08;
    }
}



public class PersonDemo{
    public static void main(String[] args){
        SalariedPerson sp = new SalariedPerson("Jinal", 50000);
        
        System.out.println("Calculated Tax:"+ sp.calculateTax(50000));
        System.out.println("Calculated Insurance:"+ sp.calculateInsurance(50000));


        
        BusinessPerson bp = new BusinessPerson("Jinal", 25000);

        System.out.println("Calculated Tax:"+ bp.calculateTax(50000));
        System.out.println("Calculated Insurance:"+ bp.calculateInsurance(50000));
    }
}