#include <fstream>
#include <iostream>
using namespace std;

class Student
{
    private:
        string name;
        int rollNo;
        string branch;
    public:
        static int roll;
        Student(){
            name = "John";
            roll++;
            rollNo = roll;
            branch = "CE";
        };
        friend ofstream& operator<<(ofstream &ofs, Student &s);
};

int Student::roll = 0;

ofstream& operator<<(ofstream& ofs, Student &s){
    ofs<<s.name<<endl;
    ofs<<s.roll<<endl;
    ofs<<s.branch<<endl;
    return ofs;
};

int main(){
    Student s1;
    ofstream ofs("Test2.txt",ios::trunc);
    ofs<<s1<<endl;
    ofs.close();
    ifstream ifs("Test2.txt");
    string input;
    while(getline(ifs,input)){
        cout<<input<<endl;
    }
    return 0;
}