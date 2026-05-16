#include <iostream>
using namespace std;

int main() {
    int choice;
    bool running = true;
    int books = 10; // total available books

    while (running) {
        cout << "\n--- Library Menu ---\n";
        cout << "1. Borrow Book\n";
        cout << "2. Return Book\n";
        cout << "3. View Available Books\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (books > 0) {
                    books--;
                    cout << "You borrowed a book.\n";
                } else {
                    cout << "No books available!\n";
                }
                break;
            case 2:
                books++;
                cout << "You returned a book.\n";
                break;
            case 3:
                cout << "Books available: " << books << endl;
                break;
            case 4:
                running = false;
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    }
    return 0;
}
