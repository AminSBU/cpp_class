#include <bitset>
#include <exception>
#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
   try
   {
      bitset<33> b;
      b[32] = 1;
      b[0] = 1;
      unsigned long x = b.to_ulong();
   }
   catch (const exception& e)
   {
      cerr << "Caught: " << e.what() << endl;
      cerr << "Type: " << typeid(e).name() << endl;
   }
}