// //greatest common divisors
// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"enter the number a ";
//     cin>>a;
//     int b;
//     cout<<"enter the va;ue of b";
//     cin>>b;
//     while(a!=b){
//         if(a>b){
//             a=a-b;
//         }
//         else if(b>a){
//             b=b-a;//euclidean method
//         }
//     }
//     cout<<a;
// }
#include <iostream>
#include <numeric>
using namespace std;
int main(){
    int a;
    cout<<"enter the value of a :";
    cin>>a;
    int b;
    cout<<"ente the value of b :";
    cin>>b;
    int lcm=a*b;
  int gcd;
  while(a!=b){
    if(a>b){
        a=a-b;
    }
    else if(b>a){
        b=b-a;
    }
  }
  gcd=a;
  cout<<"greatest common divisor is "<<gcd<<endl;
  cout<<"lcm is :"<<lcm/gcd;

}