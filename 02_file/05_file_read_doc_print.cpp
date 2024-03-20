#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    int rno, fee;
    char name[40];
    
    ifstream fi("d:/student.doc");
    
    fi >> rno >> name >> fee;
    
    fi.close();
    
    cout << endl << rno << "\t" << name << "\t" << fee << endl;
    
    return 0; 
}
