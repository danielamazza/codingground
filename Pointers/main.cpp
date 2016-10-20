#include <iostream>

using namespace std;

int main()
{
   int nValue = 8;
   int* pnValue = &nValue;
   cout << "valore variabile nValue: " << nValue << endl; 
   cout << "valore indirizzo di memoria in cui è allocata la variabile nValue (&nValue): " << &nValue << endl;
   cout << "valore attribuiti al pointer pnValue: " << pnValue << endl;
   cout << "valore di nValue attraverso il pointer: " << *pnValue << endl;
   
   
   return 0;
}

