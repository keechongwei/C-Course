// Programmer Errors (Development)
// Syntax Error: Compiler will throw
// Logical Error: Human problem, issue in algorithm. Syntax is ok. Debugger can help to fix

// User Error
// Runtime Error: User interacts unexpectedly with programme
#include <iostream>
using namespace std;

int division(int x, int y){
    if (y == 0){
        throw exception();
    }
    return x/y;
}
int main(){
    int a=10,b=0,c;

    // try and catch differs from if else as it allows for communication between functions
    // E.g I am running division in try block
    // When it fails, it throws error to main, then main communicates to user
    try{
        c = division(a,b);
        cout<<c;
    }
    catch(exception& e){
        cout<<"Division by zero"<<endl;
    }
    // catch all block, can catch all exceptions
    // like a default in a switch statement
    catch(...){

    }
    cout<<"Exiting Programme."<<endl;
    return 0;
}