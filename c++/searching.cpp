//binary search
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(){
     int n;
    cout<<"whats the size for array :";
    cin>>n;
    vector <int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int start=0;
    int end = n-1;
  
    int target;
    cout<<"what's the value of the target ?";
    cin>>target;

    while(start<=end){
          int mid = n/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(target<arr[mid]){
            end=mid-1;

        }
        else if(target > arr[mid]){
            start=mid+1;
        }
         
          int ans=mid;
   cout<<"the target is found ";
   break;



    }   
 

   


}