#include <iostream>
#include <string>

class Car {
public:
    std::string brand;
    std::string model;
    double price;
    int mileage;

    void display() {
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Price: $" << price << std::endl;
        std::cout << "Mileage: " << mileage << " miles" << std::endl;
    }

    void drive(int distance) {
        mileage += distance;
        std::cout << "Updated Mileage: " << mileage << " miles" << std::endl;
    }
};

int main() {
    Car myCar;
    myCar.brand = "Toyota";
    myCar.model = "Corolla";
    myCar.price = 20000;
    myCar.mileage = 5000;

    myCar.display();

    std::cout << "\nDriving 150 miles..." << std::endl;
    myCar.drive(150);

    std::cout << "\nDriving 300 miles..." << std::endl;
    myCar.drive(300);

    return 0;
}
