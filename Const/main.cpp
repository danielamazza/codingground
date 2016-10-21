#include <iostream>

using namespace std;

class Animal{
private:
    string name;
public:
    void setName(string name){ this->name = name; };
    void speak() const {cout << "My name is: " << name << endl; };
    // const per far sì che non possa modificare niente nel metodo
};

int main()
{
   const double PI = 3.141592;
   cout << PI << endl;
   
   Animal animal;
   animal.setName("Freddy");
   animal.speak();
   
   int value = 8;
   int value2 = 9;
   const int *pvalue = &value; // significa che int *pValue 
                               //    non può più essere modificato
   // questo, adesso,  darebbe errore: *pvalue = &value2;
   cout << *pvalue << endl;
   
   return 0;
}

