// import java.util.Scanner;

// public class clg
// {
//     static String clgname="LJ";
//     String studname="Sanket";
//     int studid=07;
//     public static void main(String args[])
//     {
//         clg c = new clg("Sanket",07);
//         c.displaystuddetail();

//         displayclgname();
//     }

//     clg(String name,int id)
//     {
//         System.out.println("Name : " + name + "\nId : " + id);
//     }

//     public static void displayclgname()
//     {
//         System.out.println(clg.clgname);
//     }

//     public static void displaystuddetail()
//     {
//         System.out.println("Non static method is call");
//     }

// }  

// Name : Sanket
// Id : 7
// Non static method is call
// LJ


import java.util.Scanner;

public class clg
{
    String clgname="LJ";

    public static void main(String args[])
    {
        clg c = new clg();
        c.displayclgname();
    }

    public void displayclgname()
    {
        System.out.println(clgname);
    }
   
}  