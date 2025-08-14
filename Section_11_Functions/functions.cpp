#include <iostream>
using namespace std;
// template functions
// allow for func to be called without defining specific function for data type
// provided operator function is defined
template <typename T>
T add (T a, T b){
    return a + b;
}

class Point{
    public:
        int value;
        Point(int x){
            value = x;
        }

        Point operator+(Point p1){
            return Point(value + p1.value);
        }
};

// calling by value
void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
    cout<< "In function, x is " << x << " and y is "<< y<<endl; 
}

// calling by address/reference
// compiler will not generate a separate memory for function in stack, it will replace function in main with function def
// ^^ this means it is an INLINE function

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(void){
    int x = 5;
    int y = 10;
    float z = 5.5;
    float w = 10.5;
    Point p1 = Point(5);
    Point p2 = Point(7);
    cout<<add(x,y)<<endl;
    cout<<add(z,w)<<endl;
    Point p3 = add(p1,p2);
    cout<<p3.value<<endl;

    // CALL BY VALUE
    cout<<"Before function, x is "<< x<<" and y is " << y<<endl;
    swap(x,y);
    cout<<"[CALLING BY VALUE] After function, x is "<<x<<" and y is "<<y<<endl;


    // CALL BY ADDRESS
    cout<<"Before function, x is "<< x<<" and y is " << y<<endl;
    swap(&x,&y);
    cout<<"[CALLING BY VALUE] After function, x is "<<x<<" and y is "<<y<<endl;
    return 0;
}