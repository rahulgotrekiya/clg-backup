public class demo{
    protected void finalize() {
        System.out.println("Object destroyed !");
    }

    public static void main(String[] args) {
        demo d = new demo();
        d = null;
        System.gc();
    }
}