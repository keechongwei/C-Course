#include <iostream>
using namespace std;

class StackOverFlow: public exception{};
class StackUnderFlow: public exception{};

class Stack{
    private:
        int * stk;
        int top = -1;
        int size;
    public:
        Stack(int sz){
            size = sz;
            stk = new int[size];
        };
        void push(int x){
            if(top == size -1){
                throw StackOverFlow();
            };
            top++;
            stk[top] = x;
        }
        int pop(){
            int x = 0;
            if(top == -1){
                throw StackUnderFlow();
            };
            x = stk[top];
            top--;
            return x;
        };
};

int main(){
    Stack s = Stack(2);
    try{
        s.push(1);
        s.push(2);
        s.pop();
        s.pop();
        s.pop();
    }
    catch(StackUnderFlow s){
        cout<<"Stack UnderFlow"<<endl;
    }
    catch(StackOverFlow s){
        cout<<"Stack OverFlow"<<endl;
    }
    return 0;
}