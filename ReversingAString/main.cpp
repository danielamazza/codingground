#include <iostream>

using namespace std;

int main()
{
   char text[]="hello"; // ricordiamoci che in questo modo 
   // viene aggiunto il carattere di fine all'array di caratteri
   
   char *pStart = text;
   int nChars = sizeof(text)-1; // per non contare il fine array
   char *pEnd = text + nChars -1;
   cout << *pEnd << endl; 
   
   return 0;
}

