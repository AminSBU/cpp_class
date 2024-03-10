#include <iostream>

using namespace std; 

class MyClass
{
	public:
		string language;
		void MyTask(std::string&);	
};

void MyClass::MyTask(string& lang)
{
	cout << "Learning " << lang << " classes." << endl;
}

int main()
{
	MyClass ccs;
	
	string st = "c++";
	ccs.MyTask(st);
	
	return 0;
}