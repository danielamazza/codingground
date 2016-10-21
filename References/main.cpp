#include <iostream>

using namespace std;

int main()
{
   int value1 = 8;
   int value2 = value1;
   value2 = 10;
   cout << "Value1: " << value1 << endl; 
   cout << "Value2: " << value2 << endl;
   
   int value3 = 8;
   int &value4 = value3; // è la reference 
   value4 = 10;
   cout << "Value3: " << value3 << endl; 
   cout << "Value4: " << value4 << endl;
   
   return 0;
}

