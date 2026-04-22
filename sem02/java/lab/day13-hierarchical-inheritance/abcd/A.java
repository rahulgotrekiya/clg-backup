// Hybrid Inheritance - In this program we used the single level and multi level
public class A {
    int X = 9;

    public static void main(String args[]) {
        C c = new C();
        D d = new D();
    }
}

class B extends A {
    int Y = 5;
}

class C extends B{
    C() {
        System.out.println(X+Y);
    }
}

class D extends A{
    int Z = 100;
    D(){
        System.out.println(Z/X);
    }
}

