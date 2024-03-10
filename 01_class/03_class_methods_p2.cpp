#include <iostream>

using namespace std; 

class MyClass
{
	public:
		int speed(int maxSpeed);	
};

int MyClass::speed(int maxSpeed)
{
	return maxSpeed;
}

int main()
{
	MyClass ccs;
	
	int spd;
	
	cout << "enter speed: ";
	cin >> spd;
	
	std::cout << "speed is: " << ccs.speed(spd) << endl;
	
	return 0;
}