class country {
    void show_state(){
        System.out.println("Show state from coutry class");
    }

    void show_pm(){
        System.out.println("PM: Narendra Modi");
    }
    
    int show_currency(int c){
        // System.out.println("Currency: "+c);
        return c;
    }
}

class state extends country {
    void show_state(){
        
        System.out.println("Show state from State class");
    }    
    
    void show_cm(){
        System.out.println("CM: Bhopa bhai patel");
    }
     
    void show_statecode(){
        System.out.println("State Code: 36400");
    }

    int show_statecode(int sc){
        return sc;
    }
}

class city extends state {
    void show_collector(){
        System.out.println("Heet patel");
    }

    final int show_citycode(){
        // System.out.println("City code: 1111");
        return 1212;
    }
}

class map{
    public static void main(String[] args){
        city c = new city();
        
        c.show_state();
        c.show_pm();
        
        System.out.println(c.show_currency(12));

        c.show_currency(100);

        c.show_state();
        c.show_cm();
        c.show_statecode();
        c.show_statecode(10101);

        c.show_collector();
        c.show_citycode();
    }
}