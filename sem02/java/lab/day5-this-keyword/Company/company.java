static class company {
    String companyName="TCS";
    
    static class department { 
        String departmentName = "Cloud Computing";
        public void details(){
            System.out.println("Method is called...");
        }
    }
    
    public static void main(String args[]) {
        company c = new company();
        company.department d = c.new department();
        d.details();        
    }  
}