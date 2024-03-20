#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	/* create string variable to strore text file */
	string TextFile;
	/* Read file with specific filename */
	ifstream MyReadFile("text.txt");
	/* print file text */
	while(getline(MyReadFile, TextFile))
	{
		cout << TextFile;
	}
	/* close file */
	MyReadFile.close();
}