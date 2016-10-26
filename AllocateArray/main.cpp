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
   Animal *pFrog = new Animal[10];
  
   
   delete [] pFrog;
   
   return 0;
}

