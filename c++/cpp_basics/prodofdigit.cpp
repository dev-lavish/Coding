#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of doing product :";
    cin>>n;
    int product=1;
    while(n!=0){
        int d=n%10;
        product=product*d;
        n=n/10;
    }
    cout<<"product of the numbeer is :"<<product;
    return 0;
    
}
//fater even odd
// #include <iostream>
// #include<limits.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value of the number :";
//     cin>>n;
//     if(n&1==1){
//         cout<<"the number is odd ";
    
//     }
//     else cout<<"the number is even";
//     return 0;
// }