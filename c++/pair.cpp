// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i]<<","<<arr[j]<<endl;
//         }
      
//     }
// }
//unique elements out the pairs

#include <iostream>
#include <algorithm>
using namespace std;
//counitng zero and one
int main(){
    int num;
    int numzero=0;
    int numone=0;
    cout<<"enter the value of n :";
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    
   
    for(int i=0;i<num;i++){
       if(arr[i]==0){
      numzero++;
 }
 else if (arr[i]==1){
    numone++;
 }
       
    }
    cout<<"number of zeros are "<<numzero<<endl;
    cout<<"number of ones are "<<numone;
    
    return 0;
}
