// Standard Template Library
// Algorithms: Search Algos, Modifying Containers  
// Containers: Structures which contain data (queues,stacks,set) 
// Iterators: Structures which traverse Containers

#include <vector>
#include <iostream>
#include <list>
#include <map>
using namespace std;

int main(){
    list <int> v = {2,4,6,8,10};
    v.push_front(0);
    v.push_back(200);
    list <int>::iterator itr;

    for (itr=v.begin();itr!=v.end();itr++){
        cout<<*itr<<endl;
    }

    map<int,string> m;
    m.insert(pair<int,string> (1,"john"));
    m.insert(pair<int,string> (2,"dan"));
    m.insert(pair<int,string> (3,"harry"));

    map<int,string>::iterator itr2;

    for (itr2=m.begin();itr2!=m.end();itr2++){
        cout<<itr2->first<<" "<<itr2->second<<endl;
    }

    itr2 = m.find(3);
    cout<<itr2->first<<" "<<itr2->second<<endl;
    return 0;
}