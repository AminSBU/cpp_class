#include <iostream>

using namespace std;

class MyClass
{
	private:
		string name;
		int age;
		
	public:
		MyClass(string name, int age)
		{
			this->name = name;
			this->age  = age;
		}
		
		void SetName(string name)
		{
			this->name = name;
		}
		
		void SetAge(int age)
		{
			this->age = age;
		}
		
		string getName()
		{
			return name;
		}
		
		int getAge()
		{
			return age;
		}
};

int main()
{	
	MyClass css("Behnam Bani", 45);
	cout << "name: " << css.getName() << endl;
	cout << "age: " << css.getAge() << endl;
	
	MyClass cs("Mohsen Ebrahimzadeh", 18);
	cout << "name: " << cs.getName() << endl;
	cout << "age: " << cs.getAge() << endl;
	
	return 0;
}