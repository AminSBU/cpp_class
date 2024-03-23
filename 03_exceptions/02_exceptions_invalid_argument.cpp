#include <iostream>
#include <stdexcept>

using namespace std;

int SumIntegers(int a, int b)
{
	if(a < 0 || b < 0)
	{
		throw std::invalid_argument("numbers must be greater than Zero");
	}
	
	return (a + b);
}

int main()
{
	int First;
	int Second;
	
	cout << "First Value:  ";
	cin  >> First;
	cout << endl;
	cout << "Second Value: ";
	cin  >> Second;
	cout << endl;
	
	try
	{
		cout << "sum is: " << SumIntegers(First, Second);	
	}
	catch(std::invalid_argument & e)
	{
		cerr << e.what() << endl;
		return -1;
	}
	
	return 0;
}