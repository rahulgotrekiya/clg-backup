// This keyword
class car
{
    int price=700000;
    car(int price)
    {
        this.price=price;
        System.out.println("Constructor is called");
    }

    public static void main(String args[])
    {
        car c=new car(800000);
        System.out.println("price is "+c.price);
    }
}

// Constructor is called
// price is 800000