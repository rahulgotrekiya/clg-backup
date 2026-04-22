import java.util.*;

class StackDemo{
    static void show(String s) {
        System.out.println(s);
    }
    public static void main(String args[]){
        Stack stack = new Stack();

        show("\nInitial size of stack: " + stack.size());

        stack.push(new Integer(1));
        stack.push(new Integer(22));
        stack.push(new Integer(6));
        stack.push(new Integer(13));
        stack.push(new Integer(40));

        show("\nStack Contents");
        show(stack + " ");

        show("First Item Poped: " + stack.pop());
        stack.push("One");
        stack.push("Two");
        stack.push("Three");

        show("After Adding the elements");
        show("\nStack Contents");
        show(stack + " ");

        show("First Item Poped: " + stack.pop());
        show("First Item Peekd: " + stack.peek());

        
        show("\nStack Contents");
        show(stack + " ");

        int pos = stack.search(new Integer(6));

        if(pos != -1) show("\nFrom top offset of 6 is: " + pos);
        else show("\nElement is not in stack...");

        for(int i = 0; i < stack.size(); i++){
            System.out.println(stack.get(i));
        }

    }
}