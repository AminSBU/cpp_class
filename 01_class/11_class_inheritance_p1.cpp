#include <iostream>
#include <string>

using namespace std;

// Base class
class Vehicle {
public:
    string brand;
    void honk() {
        cout << "Tuut, tuut! \n";
    }
    Vehicle() : brand("Ford") {} // Constructor initializer list to initialize brand
};

// Derived class
class Car : public Vehicle {
public:
    string model = "Mustang";
};

int main() {
    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model << endl;
    return 0;
}
