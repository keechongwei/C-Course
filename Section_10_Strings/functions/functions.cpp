#include <iostream>

using namespace std;
int main(void){
    string str = "Hello World";
    int length = str.length(); // equivalent to str.size()
    int capacity = str.capacity(); // gives full length of str including extra space
    // str.resize(); // changes capacity
    // str.max_size(); // gives the upper bound for str.resize()
    // str.clear(); // clears string, same as str.erase()
    // str.empty(); // checks if string is empty
    // str.append(param); // adds param to the end of string
    // str.insert(index,param); // adds param to index in string specified
    // str.replace(index1,num,param); // replaces num number of chars from index1 inclusive with param
    // str.push_back(char); // inserts a char at end of string
    // str.pop_back(); // returns char at end of string
    // str.swap(str2); // swaps str with str2
    // str.copy(char[] des,len); // copies len num of chars from str into des, if len<str.length(), must insert null character at end of array. same as str.cpy()
    // str.find(str2); // returns index of first occurrence of str2 in str from LHS
    // str.rfind(str2); // returns index of first occurrence of str2 in str from RHS
    // str.find_first_of(pattern,index); // returns index of first occurrence of any char in pattern from specified index onward in str
    // str.find_last_of(pattern,index); // returns index of last occurrence of any char in pattern from specified index onward in str
    // str.substr(start,num); // returns substring sliced from index start onward, if number is specified it will return num number of chars from index string
    // str.compare(str2); // returns -ve if first string is smaller, +ve if string is bigger, 0 if equal (size depends on ASCII value), same as strcmp(str2) 
    string::iterator it = str.begin();
    // same as a for loop using i and str[i]
    for(it; it != str.end(); it++){
        cout<<*it;
    }
    return 0;
}