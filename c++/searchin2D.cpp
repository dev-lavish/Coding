#include <iostream>
#include <limits.h>
using namespace std;

// pair<int,int> searchin2d(int arr[][3],int m,int n,int target){
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if (target==arr[i][j]){
//                 return {i,j};
//             }
//         }
//     }
//     return{-1,-1};
// }
int getminofarray(int arr[][3],int m,int n){
    int mini=INT_MAX;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            mini=min(mini,arr[i][j]);
        }
    }
    return mini;

}
int main(){
    int row;
    cout<<"how many rows ?";
    cin>>row;
    int col;
    cout<<"how many col ?";
    cin>>col;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    // int target;
    // cout<<"what's the value of target ?";
    // cin>>target;
    // pair<int,int> ans = searchin2d(arr,3,3,target);
    // cout<<ans.first<<" "<<ans.second<<endl;
    int result=getminofarray(arr,3,3);
    cout<<"the minimun value in the arrary is :"<<result;


}