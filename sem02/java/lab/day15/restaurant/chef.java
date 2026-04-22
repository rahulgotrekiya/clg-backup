
class restaurant extends chef{ 
    void show_cuisine(){
        System.out.println("show_cuisine class");
    }  
}

class multicusine extends restaurant{
    void show_dishes(){
        System.out.println("multicusine");
    }
}

class alakarta extends multicusine{
    void show_dishes(){
        super.show_dishes();
        System.out.println("alakarta");
    }
}

class buffet extends multicusine{
    void show_dishes(){
        super.show_dishes();
        System.out.println("buffet");
    }
}

class italian extends restaurant{
    void show_dishes(){
        System.out.println("italian");
    }
}

class punjabi extends restaurant{
    void show_dishes(){
        System.out.println("punjabi");
    }
}

class platers extends punjabi{
    void show_dishes(){
        super.show_dishes();
        System.out.println("platers");
    }
}



class chef extends restaurant{
    public static void main(String[] args){
        platers r = new platers();
        r.show_cuisine();
        r.show_dishes(); 

        alakarta a = new alakarta();
        a.show_dishes();    

        buffet b = new buffet();
        b.show_dishes();
    }
}