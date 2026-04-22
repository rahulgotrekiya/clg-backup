class Student {
   private int age;

   // setter method
   public void setAge(int a) {
      age = a;
   }

   // getter method
   public int getAge(){
      return age;
   }
}

public class Encapsulation {
   public static void main(String [] args) {
      Student s = new Student();

      s.setAge(33);

      System.out.println("Student age: " + s.getAge());
   }
}