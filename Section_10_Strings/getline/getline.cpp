#include <iostream>

using namespace std;
int main(void){
    string str;
    cout<<"Type a Message "<<endl;
    // // Using cin will not allow multiple words to be read from buffer
    // // If I type Hello World
    // cin>>str;
    // cout<<str<<endl;
    // cin>>str;
    // cout<<str<<endl;
    // if i use getline it will read until \n
    getline(cin,str);
    cout<<str<<endl;
    return 0;
}