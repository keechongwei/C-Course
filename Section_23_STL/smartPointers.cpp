// unique_ptr: one object can only have one ptr pointing to it at any point of time
// shared+ptr: one object can have multiple ptrs, keep track with a ref_count;
// weak_ptr: one object can have multiple ptrs WITHOUT a ref_count;
#include <iostream>
#include <memory>

using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int l, int b)
        {
            length = l;
            breadth = b;
        };
        int area(){
            return length*breadth;
        };
};

int main()
{
    unique_ptr<Rectangle> ptr(new Rectangle(10,5));
    unique_ptr<Rectangle> ptr2 = make_unique<Rectangle>(2,1);
    cout<<ptr2->area()<<endl;
    ptr2 = move(ptr);
    cout<<ptr2->area()<<endl;


    shared_ptr<Rectangle> ptr3(new Rectangle(3,4));
    shared_ptr<Rectangle> ptr4 = ptr3;
    cout<<ptr3.use_count()<<endl;
    cout<<ptr4.use_count()<<endl;
    return 0;
}