// #include <iostream>
// #include<limits.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value of n :";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int largest=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>largest){
//             largest=arr[i];//where you plaace largest matters;
//         }
//     }
//     cout<<largest;

// }
//zeroone count
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
   
//     cout<<"enter the value of number :";
//     cin>>n;
//      int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int zerocount=0;
//     int onecount=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             zerocount++;
//         }
//         else if(arr[i]==1){onecount++;}
//     }
//     cout<<"zeros are "<<zerocount<<endl;
//     cout<<"ones are"<<onecount;
// }