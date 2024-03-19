#include <iostream>
#include <string.h>

using namespace std;

class Person
{
    int id;
    char name[100];
    
    public:
        void set_person(int, char[]);
        void display_person();
};

void Person::set_person(int id, char n[])
{
    this->id = id;
    strcpy(this->name, n);
}

void Person::display_person()
{
    cout << endl << id << "\t" << name;
}

class Student: private Person
{
    char course[100];
    int fee;
    
    public:
        void set_student(int, char[], char[], int);
        void display_student();
};

void Student::set_student(int id, char n[], char c[], int f)
{
    set_person(id, n);
    strcpy(course, c);
    fee = f;
}

void Student::display_student()
{
    display_person();
    cout << "\t" << course << "\t" << fee;
}

int main(void)
{
    Student stdu;
    stdu.set_student(1000, "amin", "math", 10000);
    stdu.display_student();
    return 0;
}
