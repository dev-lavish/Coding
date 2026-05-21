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
vector<pair<int,int>>temp;
for(int i = 0 ;i<n;i++){
    for(int j=i+1;j<n;j++){
        temp.push_back({arr[i],arr[j]});
        
    }
}
for(auto it : temp){
    cout << it.first << " " << it.second << endl;


}
}