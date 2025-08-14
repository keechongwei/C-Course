#include <iostream>

using namespace std;

class Animal{
    public:
        Animal(){
            cout<<"Animal Created."<<endl;
            // cry(); // putting this here will always call Animal.cry, cannot enable runtime polymorphism
        };
        virtual void cry(){cout<<"I am an Animal."<<endl;}; // enables dynamic binding, so compiler knows what the actual object is rather than what it is defined as
};

class Lion : virtual public Animal{
    public:
        Lion(){cout<<"Lion Created."<<endl;};
        // override ensures function being overriden is actually present in base class and for readability 
        // however, defining function as virtual in base class is sufficient.
        void cry() override {cout<<" I am a Lion."<<endl;} 
};

class Tiger: virtual public Animal{
    public:
        Tiger(){cout<<"Tiger Created."<<endl;};
        void cry() override {cout<<" I am a Tiger."<<endl;};
};

class Liger: public Lion, public Tiger{
    public:
        Liger(){cout<<"Liger Created."<<endl;};
        void cry() override {cout<<" I am a Liger."<<endl;};
};

int main(){
    Animal a = Animal();
    a.cry();
    Lion l = Lion();
    l.cry();
    Tiger t = Tiger();
    t.cry();
    Liger li = Liger();
    li.cry();
    // if no virtual in Animal.cry(), compiler will statically bind an->cry() to Animal.cry()
    // since at compile time an is an Animal*
    // if virtual, it will dynamically bind and realise an is a lion object
    Animal * an = &l;
    an->cry();
    return 0;
}