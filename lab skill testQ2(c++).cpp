#include <iostream>
using namespace std;

class Product {
private:
    int productID;
    string productName;
    int quantity;
    float price;

public:
    Product() {
        productID = 0;
        productName = "N/A";
        quantity = 0;
        price = 0.0;
    }
    
    Product(int id, string name, int qty, float pr) {
        productID = id;
        productName = name;
        quantity = qty;
        price = pr;
    }

    float calculateValue() {
        return quantity * price;
    }
    
    void display() {
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price per unit: Rs. " << price << endl;
        cout << "Total Value: Rs. " << calculateValue() << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    cout << "--- Product Information ---" << endl;

    Product p1;
    cout << "Default Constructor Output:" << endl;
    p1.display();

    Product p2(101, "Laptop", 5, 55000.50);
    cout << "Parameterized Constructor Output:" << endl;
    p2.display();

    return 0;
}
