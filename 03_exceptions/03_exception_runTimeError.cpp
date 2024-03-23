#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
	try
	{
		int voltage, current;
		
		cout << "enter voltage: ";
		cin  >> voltage;
		cout << "enter current: ";
		cin  >> current;
		
		int res;
		
		if(current == 0)
		{
			throw runtime_error("devided by zero is not allow!");
		}
		
		res = voltage / current;
		
		cout << "Resistance is: " << res << endl;
	}
	catch(const exception& e)
	{
		cout << "Exeption: " << e.what() << endl;
	}
	
	return 0;
}