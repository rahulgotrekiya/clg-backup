class library{
    static String libraryname="XYZ";
    static String librarian="Rahul";
    static int time=8;

    public static void bookcategory(String technical,String novel,String story){
        System.out.println("Technical "+technical+"Novel "+novel+"Story "+story);
    }

    public static void libraryrules(){
        System.out.println("Static library rules called");
        System.out.println(library.libraryname);
        System.out.println(library.librarian);
    }

    public void bookdetails(int id,String name, String cate){
        System.out.println("Book id  "+id+" book name "+name+" category is "+cate);
    }

    public void studentDetails(int id,String name,int sem,String issuedate){
        System.out.println("Student id "+id+" name "+name+" sem "+sem+" issuedate is "+issuedate);
    }

    public static void main(String args[]){
         
         library l=new library();
         l.studentDetails(1,"Harpal",3,"12-12-20");
         l.bookdetails(101,"Mara Prayogo","action");
         libraryrules();
         bookcategory("C++","Big","Journey of c++");
    }

}

// Student id 1 name Harpal sem 3 issuedate is 12-12-20
// Book id  101 book name Mara Prayogo category is action
// Static library rules called
// XYZ
// Rahul
// Technical C++Novel BigStory Journey of c++