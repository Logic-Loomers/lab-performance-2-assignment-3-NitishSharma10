Assume you oversee a small library and would like to develop a program that looks up books using their ISBNs. A list of books with their corresponding ISBN digits is in front of you. After the librarian inputs an ISBN, your software will look through the list to locate the relevant book.  The book's title and other details will be shown if the book is located. A notice stating that the book is not available in the library will appear if it cannot be located.

#include<iostream>
#include<string>
using namespace std;

class Book {
private:
    int isbn;
    string title;
    string author;

public:
    Book(int isbn, string title, string author) : isbn(isbn), title(title), author(author) {}

    int getISBN() const {
        return isbn;
    }

    string getTitle() const {
        return title;
    }

    string getAuthor() const {
        return author;
    }
};

class Library {
private:
    Book books[5];

public:
    Library() : books {
        Book(1234, "To Kill a Mockingbird", "Harper Lee"),
        Book(2345, "1984", "George Orwell"),
        Book(3456, "The Catcher in the Rye", "J.D. Salinger"),
        Book(4567, "The Great Gatsby", "F. Scott Fitzgerald"),
        Book(5678, "Pride and Prejudice", "Jane Austen")
    } {}

    Book searchByISBN(int isbn) const {
        for (const auto& book : books) {
            if (book.getISBN() == isbn) {
                return book;
            }
        }
        return Book(-1, "", "");
    }
};

int main() {
    cout<<"Nitish 2310997190\n";
    Library library;
    int isbn;
    cout << "Enter the ISBN number of the book that you want: ";
    cin >> isbn;

    Book foundBook = library.searchByISBN(isbn);
    if (foundBook.getISBN() != -1) {
        cout << "Your book: " << foundBook.getTitle() << endl;
        cout << "Author: " << foundBook.getAuthor() << endl;
    } else {
        cout << "Book not found." << endl;
    }

    return 0;
}
