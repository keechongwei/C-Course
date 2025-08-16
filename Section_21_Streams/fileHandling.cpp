#include <fstream>
#include <iostream>

using namespace std;

int main(){
    ofstream outfile("Test.txt",ios::trunc);
    outfile<<"Helloooooo"<<endl;
    outfile<<1738<<endl;
    outfile.close();
    ifstream infile("Test.txt");
    string input = "";
    while (getline(infile,input)){
        cout<<input<<endl;
    }
    if (infile.eof()){
        cout<<"End Of File Reached."<<endl;
        infile.close();
    }
    return 0;
}