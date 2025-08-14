#include <iostream>

using namespace std;

class Student{
    private:
        int rollNo;
        string name;
    static int nominalRollNo;
    public:
        Student(string s){
            nominalRollNo++;
            rollNo = nominalRollNo;
            name = s;
        };
        void display(){
            cout<<"Student Name: "<< name<<", Roll Number: "<<rollNo<<endl;
        };
};

int Student::nominalRollNo = 0;

int main(){
    Student s1 = Student("John");
    Student s2 = Student("Matt");
    Student s3 = Student("Dan");
    s1.display();
    s2.display();
    s3.display();
    return 0;
}