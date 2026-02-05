#include <iostream>
using namespace std;
class Book{
    public:
        string title;
        string author;
        int isbn;
        bool available;

        void display() {
            cout << "Title: " << title << endl;
        }

        void borrowBook() {
            available = false;
        }

        void returnBook() {
            available = true;
        }
};

int main() {
    int size, choice, userIsbn;
    cout << "Enter the number of books: ";
    cin >> size;

    Book books[size];

    do {
        cout << boolalpha;
        cout << "1. View all books\n2. Borrow a book\n3. Return a book\n4. Exit\n";
        cout << "Enter a digit based on your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                for (int i = 0; i < size; i++) {
                    cout << i+1 << ") " << books[i].title << "\tAvailibility: " << books[i].available << endl;
                }
                break;
            
                case 2:
                    cout << "Enter the ISBN of the book: ";
                    cin >> userIsbn;
                    for (int i = 0; i < size; i++) {
                        if (books[i].isbn == userIsbn) {
                            books[i].borrowBook();
                            cout << "Title: " << books[i].title << "\tAvailability: " << books[i].available << endl; 
                            break;
                        }
                    }
                    break;
                
                case 3:
                    cout << "Enter the ISBN of the book: ";
                    cin >> userIsbn;
                    for (int i = 0; i < size; i++) {
                        if (books[i].isbn == userIsbn) {
                            books[i].returnBook();
                            break;
                        }
                    }
                    break;
        }


    } while (choice != 4);
    
    return 0;
}