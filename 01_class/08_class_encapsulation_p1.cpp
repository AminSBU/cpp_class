#include <iostream>

using namespace std;

class MyClass
{
	private:
		int salary;
		
	public:
		void SetSalary(int s)
		{
			salary = s;
		}
		
		int getSalary()
		{
			return salary;
		}
};

int main()
{
	MyClass css;
	
	int salary_price;
	cout << "enter your salary: ";
	cin >> salary_price;
	css.SetSalary(salary_price);
	std::cout << "salary is: " << css.getSalary() << endl;
	return 0;
}