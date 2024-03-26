#include <iostream>
#include <string>
using namespace std;
class Book {
    private:
    string name_;
    string isbn_id_;
    public:
    Book(string title, string isbn): name_{title}, isbn_id_{isbn} {}

    string getTitle() { return name_; }
    string getISBN() { return isbn_id_; }
};

int main() {
    const int books_number = 3;
    Book books[books_number] = {
        Book("The Lords Of The Rings", "123456"),
        Book("Pride and Prejudice", "963963"),
        Book("The Da Vinci Code", "789456")
    };

    string isbn;
    cout << "Enter the ISBN: ";
    cin >> isbn;
    for (int i = 0; i < books_number; i++) {
        if (books[i].getISBN() == isbn) {
            cout << "Book found: " << books[i].getTitle() << endl;
            return 0;
        }
    }
    cout << "Book not found in the library.";
    return 0;
}