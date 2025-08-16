#include <iostream>
#include <functional>

using namespace std;

class Test{
    private:
        int val;
    public:
        std::function<int()> p;
        Test(){
            cout<<"Test Created"<<endl;
            val = 10;
            cout<<"Value: "<<val<<endl;
            p = [&](){return val--;};
        };
        void getVal(){
            cout<<"Value: "<<val<<endl;
        };
        void callLambda(){
            p();
        };
        ~Test(){
            cout<<"Test Destroyed"<<endl;
            cout<<"Value: "<<val<<endl;
        };
};


int main(){
    int a = 10;

    auto f = [&a](){cout<<a<<endl;};
    f();
    a++;
    f();
    Test t = Test();
    t.callLambda();
    t.getVal();
    t.callLambda();
    t.getVal();
    return 0;
}