#include <iostream>

using namespace std; 

class MyClass
{
	public:
		string name;
		string model;
		int year;
		
		int car(string name, string model, int year);
};

int main()
{
	MyClass ccs;
	
	ccs.name = "BMW";
	ccs.model = "S class";
	ccs.year = 1999;
	
	std::cout << "name is: " << ccs.name << "model is: " << ccs.model << " year production is: " << ccs.year << endl;
	
	return 0;
}