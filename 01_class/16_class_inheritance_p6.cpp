#include <iostream>

using namespace std;

class A
{
	protected:
	int a;
	
	public:
		void set_A()
		{
			cout << "Enter the first value: ";
			cin  >> a;
			}
			
		void display_A()
		{
			cout << endl << "Value of First Value is: " << a;
		}
};

class B: public A
{
	protected:
	int b;
	
	public:
		void set_B()
		{
			cout << "Enter the second value: ";
			cin  >> b;
			}
			
		void display_B()
		{
			cout << endl << "Value of second Value is: " << b;
		}
};

class C: public B
{
	int c, p;
	
	public:
		void set_C()
		{
			cout << "Enter the third value: ";
			cin  >> c;
		}
		
		void display_C()
		{
			cout << endl << "Value of third Value is: " << c;
		}
		
		void Calculate()
		{
			p = a * b * c;
			cout<<endl<<"Product of "<<a<<" * "<<b<<" * "<<c<<" = "<<p;
		}
};

int main()
{
	C _c;
	
	_c.set_A();
	_c.set_B();
	_c.set_C();
	
	_c.display_A();
	_c.display_B();
	_c.display_C();
	
	_c.Calculate();
	
	return 0;
}