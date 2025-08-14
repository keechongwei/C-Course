// Inheritance 
// Concrete Classs => From Base class with all concrete functions : Reusability
// Abstract Class => From Base class with some concrete functions and some virtual functions: Reusability, Polymorphism
// Abstract Class (aka Interface in Java) => From Base class with ALL virtual functions: Polymorphism 
#include <iostream>
using namespace std;
class Animal{
    public:
        virtual void cry() = 0; // pure virtual function, forces Derived Classes to implement it.
};

// a class with only purely virtual functions is abstract
// if descendants don't implement pure virtual functions, they become abstract classes.
// abstract classes cannot be instantiated as objects
// but pointers to Abstract Classes can be made (to enable polymorphism through Derived Classes)
class Cat: public Animal{
    public:
        void cry(){cout<<"MEOW."<<endl;};
};

int main(){
    Animal* c = new Cat();
    c->cry();
    return 0;
}