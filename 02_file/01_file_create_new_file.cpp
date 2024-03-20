#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	/* create a new file */
	ofstream MyFile("text.txt");
	/* write a specific text into file */
	MyFile << "This is test text from c++ code";
	
	MyFile.close();
}