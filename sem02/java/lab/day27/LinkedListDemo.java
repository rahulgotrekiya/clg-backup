import java.util.*;

class LinkedListDemo{
    static void show(String s) {
        System.out.println(s);
    }
    public static void main(String args[]){
        LinkedList LL = new LinkedList();
        show("\nInitial size of LL: " + LL.size());


        LL.addLast(new String("Demo"));

        LL.addFirst(new Integer(1));
        LL.addFirst(new Integer(22));
        LL.addFirst(new Integer(13));
        LL.addFirst(new Integer(40));
        LL.addLast(new Float(2.5f));
        LL.addLast(new Double(12.5));
        LL.addLast(new String("Demo"));

        show("List is " + LL);
        show("First Element: " + LL.getFirst());
        show("Last Element: " + LL.getLast());
        show("Remove First Element: " + LL.removeFirst());
        show("Remove Last Element: " + LL.removeLast());


        for(int i = 0; i < LL.size(); i++){
            System.out.println(LL.get(i));
        }

    }
}