#include <iostream>

using namespace std;

class Person
{
	int id;
	char name[100];
	
	public:
		void set_p();
		void display_p();
};

void Person::set_p()
{
	cout << "enter id: ";
	cin  >> id;
	cout << "enter person: ";
	cin  >> name;
}

void Person::display_p()
{
	cout << endl << "id: " << id << "\nname: " << name;
}

class Student: private Person
{
	char course[100];
	int fee;
	
	public:
		void set_s();
		void display_s();
};

void Student::set_s()
{
	set_p();
	cout << "enter course: ";
	cin  >> course;
	cout << "enter fee: ";
	cin  >> fee;
}

void Student::display_s()
{
	display_p();
	cout<<"\nCourse: "<<course<<"\nFee: "<<fee<<endl;
}

int main()
{
	Student s;
	s.set_s();
	s.display_s();
	
	return 0;
}