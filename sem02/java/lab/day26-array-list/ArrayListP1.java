import java.util.*;
class ArrayListP1{
    public static void main(String args[]) {
        ArrayList AL1 = new ArrayList();
        System.out.println("\nInitical capacity of AL1: " + AL1.size());

        AL1.add("one");
        AL1.add("two");
        AL1.add("three");
        AL1.add("four");

        System.out.println("\nElements of Array List: " + AL1);

        AL1.remove("one");
        AL1.remove(2);

        System.out.println("\nAfter remove Elements of Array List: " + AL1);

        AL1.add(1, "ZERO");

        System.out.println("\nAfter add Elements of Array List: " + AL1);


        for (int i = 0; i < AL1.size(); i++){
            System.out.println(AL1.get(i));
        }
    }
}