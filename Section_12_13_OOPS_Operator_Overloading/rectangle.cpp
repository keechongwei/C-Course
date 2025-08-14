#include <iostream>
// difference between struct and class
// default everything in struct is public
// default everything in class is private
using namespace std;

class rectangle
{
private:
    /* data */
    float length;
    float breadth;
public:
    rectangle(float l, float b);
    rectangle(rectangle &r);
    ~rectangle();
    // inline functions, should not include complex logic
    // inline functions are defined with class so function call overhead is reduced
    int getLength(){return length;};
    int getBreadth(){return breadth;};
    void setLength(float l){length = l;};
    void setBreadth(float b){breadth = b;};
    float area();
    float perimeter();
    // friend operator overloading bypasses scope resolution
    friend rectangle operator+(rectangle r1, rectangle r2);
    friend ostream& operator<<(ostream& o, rectangle& r);
};
// must return ostream if want to continue insertion
// if return void then code in main must terminate like this
// cout<<r;
// else must return ostream so that it can be like this
// cout<<r<<endl;
ostream& operator<<(ostream& o, rectangle& r){
    o<<"=== LENGTH OF RECTANGLE ==="<<endl;
    o<< r.getLength()<<endl;
    o<<"=== BREADTH OF RECTANGLE ==="<<endl;
    o<<r.getBreadth()<<endl;
    o<<"=== AREA OF RECTANGLE ==="<<endl;
    o<< r.area()<<endl;
    o<<"=== PERIMETER OF RECTANGLE ==="<<endl;
    o<<r.perimeter()<<endl;
    return o;
}
rectangle operator+(rectangle r1, rectangle r2){
    rectangle r3 = rectangle(r1.getLength() + r2.getLength(),r1.getBreadth() + r2.getBreadth());
    return r3;
}

rectangle::rectangle(float l = 0,float b = 0)
{
    length = l;
    breadth = b;
}
// copy constructor
rectangle::rectangle(rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}

// if rect has any dynamically allocated elements, will need a deep copy constructor
// E.g
// rectangle::rectangle(rectangle &r)
// {
//     length = r.length;
//     breadth = r.breadth;
//     a = r.a;
//     p = new int[a];
//     for (int i = 0; i < a; i++){
//      p[i] = r.p[i];
//     }
// }
rectangle::~rectangle()
{
}

float rectangle::area()
{
    return length * breadth;
}

float rectangle::perimeter()
{
    return 2 * (length + breadth);
}

int main(){
    float length;
    float breadth;
    cout<<"=== INPUT LENGTH OF RECTANGLE ==="<<endl;
    cin>>length;
    cout<<"=== INPUT BREADTH OF RECTANGLE ==="<<endl;
    cin>>breadth;
    rectangle r = rectangle(length,breadth);
    cout<<r<<endl;
    rectangle r2 = rectangle(r);
    cout<<r2<<endl;
    rectangle r3 = r + r2;
    cout<<r3<<endl;
    return 0;
}