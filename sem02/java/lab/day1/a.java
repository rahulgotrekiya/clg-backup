class a {
    public static void main(String args[]) {
        int a = 5;
        int b = 8;
        
        // Operators : Arithmatic

        System.out.println(a+b);
        System.out.println(a-b);
        System.out.println(a*b);
        System.out.println(a/b);
        System.out.println(a%b);

        // Operators : Comparision

        System.out.println(a > b);
        System.out.println(a < b);
        System.out.println(a == b);
        System.out.println(a != b);
        System.out.println(a <= b);
        System.out.println(a >= b);

        // Operators : Logical

        if (a > b && a < b) {
            System.out.println("It's valid");
        } else {
            System.out.println("It's not valid");
        }

        // Control Structure
        for(int i=0;i<10;i++){
            if (i%2 == 0)
            System.out.println(i);
        }

        int n = 3;
        for(int i=1;i<=10;i++){
            System.out.println(n + " * " + i + " = " + n*i);

        }

    }
}