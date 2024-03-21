#include <iostream>

using namespace std;

int main()
{
	int age;
	
	cout << "enter your age: ";
	cin  >> age;
	cout << endl;
	
	try
	{
		if(age >=18)
		{
			cout << "your age is OK" << endl;
		}
		else
		{
			throw(age);
		}
	}
	catch(int myNum)
	{
		cout << "Access denied - You must be at least 18 years old.\n";
    	cout << "your age is: " << myNum;  
	}
	
	return 0;
}