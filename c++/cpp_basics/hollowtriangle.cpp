// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the vaue of n";
//     cin>>n;
//     for(int i=1 ; i<=n ;i++){
//             if(i==1 || i==2 || i==n){
//                 for(int j=1; j<=i ;j++){
//                     cout<<"* ";
//                 }
//             }
//                 else{
//                     cout<<"* ";
//                     for(int col=1;col<=i-2;col++){
//                         cout<<"  ";
//                     }
//                     cout<<"* ";
//                 }
//                 cout<<endl;
//             }
//         }
    
//Hollow pyramid

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of the numbers :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        if(i==1){
            cout<<"* ";
        }
        else if(i==n){
            for(int k=1;k<=2*n-1;k++){
                cout<<"* ";
            } 
        }
            else{
                cout<<"* ";
                for(int m=1;m<=2*i-3;m++){
                    cout<<"  ";

                }
                cout<<"* ";
            }
              cout<<endl;
        }
      
    }
