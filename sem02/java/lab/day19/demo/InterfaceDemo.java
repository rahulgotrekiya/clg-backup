interface A {
    public static final int a = 10;
    public void a_method();     // abstract method by default
}

interface B {
    public void b_method();     // abstract method by default
}

interface C extends A, B {
    public void c_method();     // abstract method by default
}

class InterDemo implements C {
    public void a_method() {
        System.out.println("\tA Method...");
    }
    public void b_method() {
        System.out.println("\tB Method...");
    }
    public void c_method() {
        System.out.println("\tC Method...");
    }
}

public class InterfaceDemo {
    public static void main(String[] args){
        InterDemo obj = new InterDemo();    // Object of interDemo class

        obj.a_method();
        obj.b_method();
        obj.c_method();

        System.out.println("\tVariable:"+ A.a);
    }
}