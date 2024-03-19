#include <iostream>

using namespace std;

class A
{
	protected:
		int a;
		
	public:
		void set_a()
		{
			cout << "enter the value of A: ";
			cin  >> a;
		}
		
		void display_a()
		{
			cout << "Value of A=" << a;
		}
};

class B: public A
{
	int b,p;
	
	public:
		void set_b()
		{
			set_a();
			cout << "enter the value of B: ";
			cin  >> b;			
		}
		
		void display_b()
		{
			display_a();
			cout << "Value of B=" << b;
		}
		
		void calculate_p()
		{
			p = a * b;
			cout<<endl<<"Product of "<<a<<" * "<<b<<" = "<<p;
		}
};

int main()
{
	B _b;
	
	_b.set_b();
	_b.calculate_p();
	
	return 0;
}