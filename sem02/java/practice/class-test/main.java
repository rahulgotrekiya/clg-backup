import java.util.Scanner;

public class main {  
    static {
        System.out.println("Static block executed");  
    }

    String name = "Rahul";

    static class child{
      String skill = "DevOps";

      public void details(){
         System.out.println("Method is called!!!");
      }
    }
   // int price =111111;

   // main(int price){
   //    this.price = price;
   //    System.out.println("Constructor Is called!");
   // }

   // String name;
   // int rollno;

   // main(){
   //    name="Unknown";
   //    rollno= 0;
   // }

   // main(String a, int b){
   //    name=a;
   //    rollno= b;
   // }

   // void display(){
   //    System.out.println(name);
   //    System.out.println(rollno);
   // }

   // int add(int a, int b){
   //    return a+b;
   // }
   
   // int add(int a, int b, int c){
   //    return a+b+c;
   // }
   
   // double add(double a, double b){
   //    return a+b;
   // }
   
   public static void main(String[] args) {

      main m = new main();

      main.child cm = new main.child();

      cm.details();

      // main p = new main(12121121);
      // System.out.println("Price is: "+p.price);
      // main s = new main();
      // main s1 = new main("Rahul", 13);

      // s.display();
      // s1.display();

      // main calc = new main();

      // System.out.println(calc.add(1, 3));
      // System.out.println(calc.add(1, 3, 4));
      // System.out.println(calc.add(1.5, 10.5));

      // Scanner sc = new Scanner(System.in);

      // // matrix addition
      // int[][] matrix1 = new int[2][2];
      // int[][] matrix2 = new int[2][2];
      // int[][] result = new int[2][2];

      // System.out.println("Matrix 01: ");
      // for(int i=0;i<2; i++){
      //    for(int j=0;j<2;j++){
      //       matrix1[i][j] = sc.nextInt();
      //    }
      // }

      // System.out.println("Matrix 02: ");
      // for(int i=0;i<2; i++){
      //    for(int j=0;j<2;j++){
      //       matrix2[i][j] = sc.nextInt();
      //    }
      // }

      // for(int i=0;i<2; i++){
      //    for(int j=0;j<2;j++){
      //       result[i][j] = matrix1[i][j]+matrix2[i][j];
      //    }
      // }

      // System.out.println("Result: ");
      // for(int i=0;i<2; i++){
      //    for(int j=0;j<2;j++){
      //       System.out.print(result[i][j]+" ");
      //    }
      //    System.out.println();
      // }

      // Scanner sc = new Scanner(System.in);
      // int[][] arr = {
      //    {1, 2, 3},
      //    {4, 5, 6},
      //    {7, 8, 9}
      // };

      // System.out.println(arr[1][2]);

      // for(int i=0; i<arr.length;i++){
      //    for(int j=0; j<arr[i].length; j++){
      //       System.out.print(arr[i][j]+" ");
      //    }
      //    System.out.println();
      // }

      // for(int i = 0; i < marks.length; i++) {
      //    System.out.println("Enter ele:" + i + ": ");
      //    marks[i] = sc.nextInt();
      // }
       
      // for(int i = 0; i < marks.length; i++) {
      //    System.out.println(marks[i]);
      // }

      // for(int ele:arr){
      //    System.out.println(ele);
      // }
   }
}