class day1
{
    public static void main(String args[])
    {
        // int a=5;
        // int b=8;

        // System.out.println("Hello World");
        // System.out.println(a+b);
        // System.out.println(a-b);
        // System.out.println(a*b);
        // System.out.println(a/b);
        // System.out.println(a%b);

        // System.out.println(a>b);
        // System.out.println(a<b);
        // System.out.println(a==b);
        // System.out.println(a!=b);
        // System.out.println(a<=b);
        // System.out.println(a>=b);

        // if(a<=5 && b<=10)
        // {
        //     System.out.println("Its Valid..");
        // }else{
        //     System.out.println("Invalid");
        // }


        // Control Structure
        // For Loop
        // for(int i=1;i<=10;i++){
        //     System.out.println("2 * "+i+" = "+2*i);
        // }

        // take 3 marks.. 3 sub marks > 80 - first class and so on..
        int maths=75,eng=83,science=83;
        if((maths>80 && maths<90) && (eng>80 && eng<90) && (science>80 && science<90))
        {
            System.out.println("First Class");
        }
        else if((maths>80 && maths<90) && (eng>80 && eng<90) || (maths>80 && maths<90) && (science>80 && science<90) || (science>80 && science<90) && (eng>80 && eng<90))
        {
            System.out.println("Second Class");
        }
        else if((maths>80 && maths<90) || (eng>80 && eng<90) || (science>80 && science<90)){
            System.out.println("Third Class");
        }
    }
}

// javac day1.java
// java day1