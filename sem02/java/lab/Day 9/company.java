import java.util.Scanner;

static class company
{
    String companyname="tcs";

    static class department
    {
        String departmentname="cloud computing";
        public void details()
        {
            System.out.println("Mehod is called");
        }
    }

    public static void main(String args[])
    {
        company c=new company();
        company.department d=c.new department();
        d.details();
        // System.out.println();
    }
}