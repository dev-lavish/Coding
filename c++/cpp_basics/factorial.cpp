// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enteer the value of the number :";
//     cin>>n;
// int fact =1;
// for(int i=1;i<=n;i++){
//     fact=fact*i;
// }
// cout<<"factorial of the number is "<<fact;

// }
//the nummber is power of 2 or not
//as we know set bit =1;
//power of 2 number have only 1 set bit therefore,
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the vlaue of n :";
    cin>>n;
    if( (n&(n-1))==0){
        cout<<"the number is power of 2";

    }
    else cout<<"the numbeer is not power of 2";
    return 0;
}
