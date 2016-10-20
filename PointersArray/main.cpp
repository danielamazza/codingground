#include <iostream>

using namespace std;

int main()
{
   string myarr[] = {"one", "two", "three"};
   for (int i=0; i<3; i++){
       cout << myarr[i] << endl;
   }
   cout << sizeof(myarr) << endl;
   cout << sizeof(string) << endl;
   cout << sizeof(myarr)/sizeof(string) << endl;
   
   return 0;
}

