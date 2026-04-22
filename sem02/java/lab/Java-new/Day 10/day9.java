public class day9
{
    public static void main(String args[])
    {
        day9 d = new day9();
        day9.library lib = d.new library();
        day9.library.book b = lib.new book("Demo Title");
    }
    public static class library
    {
        public library()
        {
            System.out.println("Library Class");
        }
        public class book
        {
            String bookTitle;
            public book(String bookTitle)
            {
                this.bookTitle = bookTitle;
                System.out.println("Book Class Inner and Book Name is : "+bookTitle);
            }
        }
    }
}