//reversing an array
#include <iostream>
#include <vector>
#include<utility>
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
int i=0;
int j=n-1;
if(n%2==0){
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
else {
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    
}
while(it!=arr.end()){
    cout<<*it<<" ";
    it++;

}

}
