public class Book {
    String title;

    Book(String title){
        this.title = title;
    }

    @Override
    public boolean equals(Object obj) {
        Book b = (Book) obj;
        return this.title.equals(b.title);
    }

    public static void main(String[] args) {
        Book b1 = new Book("Game of Thrones");
        Book b2 = new Book("Game of Thrones");

        System.out.println(b1.equals(b2));
    }
}