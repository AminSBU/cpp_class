#include <iostream>

class MyClass {
public:    
    int x;   
private:   
    int y;   

public:
    // Public member function to set the value of y
    void setY(int value) {
        y = value;
    }

    // Public member function to get the value of y
    int getY() {
        return y;
    }
};

int main() {
    MyClass myObj;
    myObj.x = 25;  // Allowed (public)
    
    // Accessing y using public member functions
    myObj.setY(50);  // Setting the value of y
    std::cout << "Value of y: " << myObj.getY() << std::endl;  // Getting the value of y

    return 0;
}