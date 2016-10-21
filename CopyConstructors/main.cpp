#include <iostream>

using namespace std;

class Animal{
private:
    string name;
public:
    Animal() {cout << "Animal created " << endl;};
    Animal(const Animal& other): name(other.name) {cout << "Animal created by copy constructor" << endl;}
    void setName(string name){this->name = name; }
    void speak() const {cout << "My name is: "<< name << endl;}
};

int main()
{
   Animal animal1;
   animal1.setName("Freddy");
   Animal animal2 = animal1; // qui non viene invocato Animal
   // non viene scritto "Animal created", c'è il copy constructor
   
   animal2.speak();
   animal2.setName("Bob");
   animal2.speak();
   animal1.speak();
   
   
   // altro modo di chiamare il copy constructor:
   Animal animal3(animal1);
   cout << "Animal3" << endl;
   animal3.speak(); 
   return 0;
}

