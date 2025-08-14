// private: only within class
// protected: within class and derived classes
// public: anywhere
// friend: function or class can access ANYTHING


#include <iostream>
using namespace std;
class Box;
class Key; // hint to compiler that definition exists below
// otherwise Box cannot have Key as friend unless Key is defined before Box
void inspect(Box b);

class Box{
    private:
        int treasure = 100;
    protected:
        string material = "Wood";
    public:
        string colour = "Black";
    friend Key;
    friend void inspect(Box b);
};

class Key{
    public:
        void unlock(Box b){
            cout<<"Treasure Value is: "<< b.treasure<<endl;
        }
};

void inspect(Box b){
    cout<<"Box is: "<<b.colour<<endl;
    cout<<"Box is made of: "<<b.material<<endl;
    cout<<"Box treasure value: "<<b.treasure<<endl;

}
int main(){
    Key k = Key();
    Box b = Box();
    k.unlock(b);
    inspect(b);
    return 0;
}