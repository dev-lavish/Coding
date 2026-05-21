// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the side of the 0 1 triangle ";
// cin>>n;
// int a;
// for(int i=1;i<=n;i++){
//     if(i%2!=0){
//         a=1;
//     }
//     else{
//         a=0;
//     }
//     for(int j=1;j<=i;j++){
//         cout<<a;
//         if(a==0){
//             a=1;
//         }
//         else{
//             a=0;
//         }
//     }
//     cout<<endl;
// }
// }
//method 2
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of the number :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<" 1";
            }
            else{cout<<" 0";}
        }
        cout<<endl;
    }
}
