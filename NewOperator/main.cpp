#include <iostream>

using namespace std;

class Animal {
private:
    string name;
public:
    Animal(){
        cout << "Animal created" << endl;
    }
    
    Animal(const Animal &other):
        name(other.name){
        cout << "Animal created by copy" << endl;
    } 
    
    ~Animal(){
        cout << "Destructor called" << endl;
    }
    void setName(string name){
        this->name = name;
    }
    void speak(){
        cout << "My name is: " << name << endl;
    }
};


int main()
{
   Animal *pCat1 = new Animal();
   pCat1->setName("Milo");
   pCat1->speak();
   delete pCat1;
   return 0;
}

