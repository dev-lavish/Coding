//in this we have to shift th elemenets by n'th position
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
int k;
cout<<"enter the value to rotate :";
cin>>k;
k=k%n;//very imp condition prevent from extra rotations
vector<int>temp;
for(int i=n-k;i<=n-1;i++){
    int value=arr[i];
    temp.push_back(value);

}
for(int i=n-1;i>=0;i--){
    if(i>=k){
        arr[i]=arr[i-k];
    }

}
for(int i=0;i<k;i++){
    arr[i]=temp[i];
}
it=arr.begin();
while(it!=arr.end()){
    cout<<*it<<" ";
    it++;
}

}