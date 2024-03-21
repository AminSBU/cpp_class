#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	string FileText;
	fstream File;
	
	ifstream ReadFileText("06_file_copy_to_new_file.cpp.cpp");
	
	File.open("file_copy.cpp");
		
	while(getline(ReadFileText, FileText))
	{
		File << FileText;
	}
	
	File.close();
	ReadFileText.close();
	
	return 0;
}