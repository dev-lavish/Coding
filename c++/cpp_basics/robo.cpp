#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int m;
    vector<int>marks(n,m);
    for(int i=0;i<marks.size();i++){
        cout<<*(marks.begin());
    }

}