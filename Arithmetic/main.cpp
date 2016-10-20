#include <iostream>

using namespace std;

int main()
{
   double value1 = 7/2; // anche se è double dà un int, perché stiamo dividendo due interi
   cout << value1 << endl; 
   double value2 = 7.0/2; // questo funziona perché 7.0 è un double
   cout << value2 << endl;
   return 0;
}

