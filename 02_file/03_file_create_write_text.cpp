/* File Handling with C++ using fstream class object */
/* To write the Content in File */
/* Then to read the content of file*/
#include <iostream>

/* fstream header file for ifstream, ofstream, 
fstream classes */
#include <fstream>

using namespace std;

// Driver Code
int main()
{
	fstream fio;
	
	string line;
	
	fio.open("samp.txt", ios::trunc | ios::out | ios::in);
	
	while(fio)
	{
		getline(cin, line);
		
		if(line == "-1")
		{
			break;
		}
		
		fio << line << endl;
	}
	
	fio.seekg(0, ios::beg);
	
	while(fio)
	{
		getline(fio, line);
		
		cout << line << endl;
	}
	
	fio.close();
	
	return 0;
}
