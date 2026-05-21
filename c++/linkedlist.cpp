#include <iostream>
#include <list>
using namespace std;
int main(){
    list <int> ops;
    ops.push_back(10);
    ops.push_back(20);
    ops.push_back(30);
    ops.push_back(40);
    //for traversing we create an iterator
    ops.insert(ops.begin(),100);
    //insert operation whereever we want
    ops.insert(ops.end(),90);
   
    list <int>::iterator it=ops.begin();
    while(it!=ops.end()){
        cout<<*it<<" ";
        it++;

    }
}