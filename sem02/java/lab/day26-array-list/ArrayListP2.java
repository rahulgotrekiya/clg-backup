import java.util.*;
class ArrayListP2{
    public static void main(String args[]) {
        ArrayList <String> list = new ArrayList<>();
        System.out.println("\nInitical capacity of list: " + list.size());

        list.add("Rahul");
        list.add("Kartik");
        list.add("Abhijit");
        list.add("Smit");

        System.out.println(list);


        ArrayList<String> sublist = new ArrayList<>();
        for (int i = 0; i < list.size(); i++){
            if(list.get(i).charAt(0) == 'A'){
                sublist.add(list.get(i));
            }
        }
        System.out.println(sublist);

        Collections.sort(list);
        System.out.println("Ascending order: "+list);

        Collections.sort(list, Collections.reverseOrder());
        System.out.println("Descending order: "+list);

        System.out.println("Capacity of list: "+list.size());
        System.out.println("Capacity of sublist: "+sublist.size());


    }
}