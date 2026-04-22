class country{
    void display(){
        System.out.println("India");
    }
}

class state extends country{
    void display(){
        System.out.println("Gujarat");
    }
}

class city extends state {
    void display(){
        System.out.println("Morbi");
    }
}

public class demo {
    public static void main(String[] args){
        country c = new city();
        
        c.display();
    }
}