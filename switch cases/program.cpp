#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Book class
class Book {
private:
    string title;
    string author;
    bool available;

public:
    Book(string t, string a) : title(t), author(a), available(true) {}

    void display() const {
        cout << "Title: " << title << "\nAuthor: " << author
             << "\nAvailable: " << (available ? "Yes" : "No") << "\n";
    }

    void borrowBook() {
        if (available) {
            available = false;
            cout << "You borrowed \"" << title << "\".\n";
        } else {
            cout << "Sorry, \"" << title << "\" is not available.\n";
        }
    }

    void returnBook() {
        available = true;
        cout << "You returned \"" << title << "\".\n";
    }
};

// Library class
class Library {
private:
    vector<Book> books;

public:
    void addBook(const Book& book) {
        books.push_back(book);
    }

    void showBooks() const {
        for (size_t i = 0; i < books.size(); ++i) {
            cout << "Book #" << i + 1 << ":\n";
            books[i].display();
            cout << "-----------------------\n";
        }
    }

    void borrowBook(int index) {
        if (index >= 0 && index < books.size()) {
            books[index].borrowBook();
        } else {
            cout << "Invalid book index.\n";
        }
    }

    void returnBook(int index) {
        if (index >= 0 && index < books.size()) {
            books[index].returnBook();
        } else {
            cout << "Invalid book index.\n";
        }
    }
};

// Main function
int main() {
    Library library;

    // Adding books to the library
    library.addBook(Book("The Great Gatsby", "F. Scott Fitzgerald"));
    library.addBook(Book("1984", "George Orwell"));
    library.addBook(Book("To Kill a Mockingbird", "Harper Lee"));

    cout << "=== Library Catalog ===\n";
    library.showBooks();

    // Borrowing and returning
    library.borrowBook(0);
    library.returnBook(0);

    cout << "\n=== Updated Catalog ===\n";
    library.showBooks();

    return 0;
}

