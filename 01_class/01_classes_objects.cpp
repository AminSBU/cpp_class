#include <iostream>

using namespace std;

class MyClass
{
	public:
		string name;
		int age;
		string job;
		
	private:
		string wife_name;
		int children_number;
};

int main()
{
	MyClass css;
	
	while(1)
	{
		std::cout << "enter name: ";
		std::cin  >> css.name;
		std::cout << "enter age: ";
		std::cin  >> css.age;
		std::cout << "enter job: ";
		std::cin  >> css.job;
		std::cout << "************************" << endl;
		std::cout << "your name is: " << css.name << endl;
		std::cout << "your age is: " << css.age << endl;
		std::cout << "your job is: " << css.job << endl;
		std::cout << "************************" << endl;
	}
	return 0;
}
