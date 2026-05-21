//reversing an array
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main(){
int n;
cout<<"enter the size for the array :";
cin>>n;
vector<int> arr(n);
vector <int> :: iterator it = arr.begin();
while(it!=arr.end()){
    cin>>*it;
    it++;

}
it=arr.begin();
    sort(arr.begin(),arr.end());
    while(it!=arr.end()){
        cout<<*it<<" ";
        it++;
    }


}
