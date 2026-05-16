#include <iostream>
#include <string>
#include <vector>

class Product {
public:
    std::string name;
    double price;

    // Regular Constructor
    Product(std::string n, double p) : name(n), price(p) {
        std::cout << "Regular constructor called for " << name << std::endl;
    }

    // Copy Constructor
    Product(const Product& other) : name(other.name), price(other.price) {
        std::cout << "Copy constructor called to duplicate " << other.name << std::endl;
    }
    
    // Method to display details
    void displayDetails() const {
        std::cout << "Product Name: " << name << ", Price: $" << price << std::endl;
    }
};

int main() {
    // Create the original Product object
    Product original("Laptop", 999.99);

    // Create copies using the copy constructor (initialization syntax calls the copy constructor)
    Product copy1 = original;
    Product copy2(original);
    Product copy3 = original;
    
    // Store all products in a vector for easy iteration
    std::vector<Product> products = original, copy1, copy2, copy3 };

    std::cout << "\nDisplaying details of all products using a for loop:" << std::endl;

    // Use a range-based for loop to iterate and display details
    for (const auto& prod : products) {
        prod.displayDetails();
    }

    return 0;
}
