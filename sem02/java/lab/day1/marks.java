class marks {
    public static void main(String args[]) {

        /*
            There are 3 subjects maths, english and science

            subjects marks > 80 and < 90 then first class
            subjects marks > 80 and < 90 then second class
            subjects marks > 80 and < 90 then third class
        */

        // This is not a complete program !!!
        
        int maths = 85;
        int eng = 72;
        int science = 89;
        
        if (maths > 80  && maths < 90) && (eng > 80 && eng < 90) && (science > 80 && science < 90) {
            System.out.println("First Class");
        } else if ((maths > 80  && maths < 90) && (eng > 80 && eng < 90) || (science > 80 && science < 90) && (eng > 80 && eng < 90) || (science > 80 && science < 90) && (maths > 80  && maths < 90)) {
            System.out.println("Second Class");
        } else if ((maths > 80  && maths < 90) || (eng > 80 && eng < 90) || (science > 80 && science < 90)) {
            System.out.println("Second Class");
        }
    }
}