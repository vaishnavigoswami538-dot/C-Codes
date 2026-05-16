#include <iostream>
#include <string>

using namespace std;

class Book {
public:
    string title, author;
    double price;

    void display() {
        cout << "Title: " << title << ", Author: " << author << ", Price: $" << price << endl;
    }
};

int main() {
    Book library[3]; // Array of 3 book objects

    // Initialize books directly
    library[0] = {"The Hitchhiker's Guide to the Galaxy", "Douglas Adams", 10.99};
    library[1] = {"1984", "George Orwell", 8.50};
    library[2] = {"Pride and Prejudice", "Jane Austen", 12.00};

    cout << "--- Book Details ---" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "Book " << i + 1 << ": ";
        library[i].display();
    }

    return 0;
}
