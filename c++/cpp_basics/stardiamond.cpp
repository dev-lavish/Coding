// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number of lines :";//number of lines must alwyas be odd azmuth 
//     cin>>n;
//     int ml=(n+1)/2;
//     int nsp=ml-1;//initialisng number of spaces 
//     int nst=1;//initialisng number of stars
//     for(int i=1;i<=n;i++){
//         for(int k=1;k<=nsp;k++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=nst;j++){
//             cout<<" *";
//         }
//         if(i<ml){
//             nsp--;
//             nst+=2;
//         }
//         else{
//             nsp++;
//             nst-=2;
//         }
//         cout<<endl;
//     }
// }
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of the number :";
    cin>>n;
    int nst=n;
    int nsp=0;
    int mid1=n/2;
    int mid2=mid1+1;
    for(int i=0;i<=n;i++){
         for(int k=1;k<=nsp;k++){//keep the spaces loop before as we have to print the spaces first
            cout<<"  ";
        }
        for(int j=1;j<=nst;j++){
            cout<<"* ";
        }
       
        if(i<mid1){
            nst-=2;
            nsp++;
        }
       
    //  else if(i==mid2){
    //         nst;
    //         nsp;} when i put this  conditio it hold the incrememnt two times hence no 
    //need for this or do one more condition which is else if(i>mid2)
        else{
            nst+=2;
            nsp--;
        }
        cout<<endl;
    }
    
return 0;
}
