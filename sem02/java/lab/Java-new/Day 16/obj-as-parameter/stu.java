class stu {
    int id;
    String name;
     
    stu(int i, String a) {
        id = i;
        name = a;
    }

    void display(stu s) {
        System.out.println(s.id + " "+ s.name);
    }

    public static void main(String[] args) {
        stu s1 = new stu(101, "Rahul");
        stu s2 = new stu(102, "Prashant");

        s1.display(s2);
        s2.display(s1);
    }
}