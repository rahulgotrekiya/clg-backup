public class Employee{
    int id = 10;

    @Override
    public int hashCode(){
        return id * 31; // Simple custom hash
    }

    public static void main(String[] args){
        Employee e = new Employee();
        System.out.println(e.hashCode());
    }
}