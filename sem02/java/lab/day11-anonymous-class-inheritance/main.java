// Show method work diffrently for anonymous class, while for other objects it will works same.
// Same name method shoud be there to work for other objects as well
class A {
    void display() {
        System.out.println("Normal Class method");
    }
}
public class main {    
    public static void main(String args[]) {
        A obj = new A(){
            // This method should be in class A otherwise it will show error when we call using obj.show()
            void show(){
                System.out.println("Annonymous Class using nomral class");
            }
        };
        
        // obj.show();
        obj.display();

        A obj2 = new A();
        // obj2.show();    // This will give the error because show method is not member of Non anonymous class 
    }
}