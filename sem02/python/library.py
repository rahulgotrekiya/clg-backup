library = {}

def add_book():
    book_id = input("Enter Book ID: ")
    if book_id in library:
        print("Book ID already exists!")
        return
    name = input("Enter Book Name: ")
    author = input("Enter Author: ")
    qty = int(input("Enter Quantity: "))
    library[book_id] = {"name": name, "author": author, "qty": qty}
    print("Book added successfully!")

def search_book():
    book_id = input("Enter Book ID to search: ")
    if book_id in library:
        book = library[book_id]
        print(f"Name: {book['name']}, Author: {book['author']}, Qty: {book['qty']}")
    else:
        print("Book not found!")

def update_book():
    book_id = input("Enter Book ID to update: ")
    if book_id in library:
        print("1. Update Name\n2. Update Author\n3. Update Quantity")
        opt = int(input("Choice: "))
        if opt == 1:
            library[book_id]["name"] = input("New Name: ")
        elif opt == 2:
            library[book_id]["author"] = input("New Author: ")
        elif opt == 3:
            library[book_id]["qty"] = int(input("New Quantity: "))
        print("Updated!")
    else:
        print("Book not found!")

def delete_book():
    book_id = input("Enter Book ID to delete: ")
    if book_id in library:
        del library[book_id]
        print("Book deleted!")
    else:
        print("Book not found!")

def display_all():
    if len(library) == 0:
        print("No books in library!")
        return
    for bid, info in library.items():
        print(f"ID: {bid} | Name: {info['name']} | Author: {info['author']} | Qty: {info['qty']}")

while True:
    print("\n===== Library Manager =====")
    print("1. Add Book")
    print("2. Search Book")
    print("3. Update Book")
    print("4. Delete Book")
    print("5. Display All Books")
    print("6. Exit")

    ch = int(input("\nEnter choice: "))

    if ch == 1:
        add_book()
    elif ch == 2:
        search_book()
    elif ch == 3:
        update_book()
    elif ch == 4:
        delete_book()
    elif ch == 5:
        display_all()
    elif ch == 6:
        print("Goodbye!")
        break
    else:
        print("Invalid choice!")