#include <iostream>

using namespace std;

class Person{
private:
    string name;
public:
    Person(){
        cout << "Person created" << endl;
    }
    ~Person(){
        cout << "Destructor called" << endl;
    }
    void setName(string name){
        this->name = name;
    }
    void saluta(){
        cout << "ciao sono " << name << endl;
    }
};

int main()
{  
   char c = 'a';
   Person *pPerson = new Person[26];
   
   for (int i=0; i<26; i++,c++){
        string name(1,c);       
        pPerson[i].setName(name);
        pPerson[i].saluta();
   
   }
   delete [] pPerson;
   return 0;
}

