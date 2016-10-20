#include <iostream>

using namespace std;

void manipulate(double dValue){
    cout << "2. Valore passato al metodo: " << dValue << endl;
    dValue = 123.4;
    cout << "3. Valore modificato DENTRO il metodo: " << dValue << endl;
}

void manipulatePointer(double* dValue){ //passo il pointer della variabile
    cout << "2. Valore passato al metodo: " << dValue << endl;
    *dValue = 123.4;
    cout << "3. Valore modificato DENTRO il metodo: " << *dValue << endl;
}

int main()
{
   double mydValue = 111.11;
   cout << "1. Valore attribuito alla variabile: " << mydValue << endl;
   manipulate(mydValue); 
   cout << "4. Valore della variabile FUORI dal metodo: " << mydValue << " (non modificata!)" << endl;
   
   cout << "======================" << endl;
   
   double mydValue2 = 222.22;
   cout << "1. Valore attribuito alla variabile: " << mydValue2 << endl;
   manipulatePointer(&mydValue2); //passo l'indirizzo in cui è allocata la variabile
   cout << "4. Valore della variabile FUORI dal metodo: " << mydValue2 << " ( modificata!)"<< endl;
   return 0;
}

