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

//shifting the elements to one position
int temp;
temp=arr[n-1];
for(int i=n-1;i>=0;i--){
    if(i!=0){
        arr[i]=arr[i-1];
    }
    else{
        arr[i]=temp;
    }
    
}
it=arr.begin();
while(it!=arr.end()){
    cout<<*it<<" ";
    it++;
}

}