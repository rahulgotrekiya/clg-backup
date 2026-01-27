class country {
    String country = "India";

    public void displayCountry(){
        System.out.println("Country: "+ country);
    }
   
}

class state extends country {
    String state = "Gujarat";

    public void displayState(){
        System.out.println("State: "+ country);
    }
}

class city extends state {
    String city = "Ahmd";

    public void displayCity(){
        System.out.println("City: "+ city);
    }

     
    public static void main(String args[]){
        city c = new city();
        c.displayCountry();
        c.displayState();
        c.displayCity();
        
        university d = new university();
        d.displayUniversitydetails();
        d.displaydept();
    }
}

class university {
    String university = "LJ";

    public void displayUniversitydetails(){
        System.out.println("university: "+ university);
    }   
}

class dept extends university {
    String dept = "MCA";

    public void displaydept(){
        System.out.println("Department: "+ dept);
    }  
}