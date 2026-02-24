books ={
   101: ("Game of thrones", "Gorge RR Martin"),
   102: ("Vagabond", "hatake"),
   103: ("Ikigae", "shekin")
}

avalabe_books = {101, 102, 103}
issued_books = []

while True:
   print("\n--- Library System ---")
   print("1. Print all books")
   print("2. Issue book")
   print("3. Return book")
   print("4. exit")

   ch = int(input("Enter Your choice: "))

   if ch == 1:
      print("Avalable Books")
      for key,value in books.items():
         print(key," : ",value)
   elif ch == 2:
      print(avalabe_books)
      issuebook=int(input("Enter Book Id To Issue Book : ")) 
      if issuebook in avalabe_books:
         print("Book Issued !")
         avalabe_books.remove(issuebook)
         issued_books.append(issuebook)
         print("Issued books:", issued_books)
      else:
         print("Book Not Available ! ") 

   elif ch == 3:
      return_book =int(input("Enter Book Id To Return Book : ")) 
      if return_book in issued_books:
         print("Book Returned !")
         issued_books.remove(return_book)
         avalabe_books.add(return_book)

         print("Issued books:", issued_books)
         print("avalable books:", avalabe_books)
      else:
         print("Book Not Available ! ") 
   elif ch == 4:
      break
   else:
      print("unvalid")