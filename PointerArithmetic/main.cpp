#include <iostream>

using namespace std;

int main()
{
   string texts[]={"one","two", "three", "four", "five"}; 
   string *pTexts = texts;
   cout << *pTexts <<endl; // visualizza il primo elemento
   return 0;
}

