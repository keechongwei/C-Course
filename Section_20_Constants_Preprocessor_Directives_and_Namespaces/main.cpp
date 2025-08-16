#include <iostream>

#ifndef MY_MACROS// useful when multiple headers are used
    #define MY_MACROS
    #define x 10 // preprocessor directive/macro. Does not consume memory
    #define c cout // can be used to replace keywords
    #define SQ(x) (x*x) // can be used to define functions
    #define MSG(x) #x // special define which informs compiler to enclose x in ""
#endif

using namespace std;

class Demo{
    private:
        int w = 5;
        int u = 10;
    public:
    // const in function declaration ensures 
    // function will NOT modify any variables
        void Display() const{
            //w++;
            c<<w<<" "<<u<<endl;
        }
};

// namespace allows for same function to be defined differently

namespace First
{
    void fun(){
        c<<MSG(FIRST)<<endl;
    };
};

namespace Second
{
    void fun(){
        c<<MSG(SECOND)<<endl;
    }
};
int main(){
    int z = 20;
    const int y = 10;// const is an identifier. Consumes memory
    // read from R to L from LHS of equal sign to determine what ptr is
    const int* ptr =  &y; // can point to other data, cannot modify data
    int const * ptr2 = &y; // syntax diff but same thing as const int *
    int * const ptr3 = &z; // cannot point to other data but can modify data
    const int * const ptr4 = &z; // cannot point to other data, cannot modify data
    c<<SQ(z)<<endl;
    c<<MSG(This Actually Works)<<endl;
    First::fun();
    Second::fun();
    return 0;
}