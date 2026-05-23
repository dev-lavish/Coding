// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"enter the value to be reversed :";
// cin>>n;
// int rev=0;
// while(n!=0){
//     int digit=n%10;
//     rev=(rev*10)+digit;
//     n=n/10;
// }
// cout<<"revrse of the number is :"<<rev;
// return 0;

// }
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter the value of n :";
// cin>>n;
// for(int i=1;i<=n;i++){
   
//     for(int j=1;j<=i;j++){
//         cout<<j<<" ";
//     }
//     for(int k=1;k<=2*(n-i);k++){
//         cout<<"  ";
//     }
//     for(int j=i;j>0;j--){//reversing the number
//         cout<<j<<" ";
    
//     }
      
//     cout<<endl;

// }
// }
//reverse of interger in its boudaries and doint revers of negative number
// without removing its sign is a bad practise dont do it
#include <iostream>
#include <limits.h>
using namespace std;
bool negorpos(int n){
  bool flag=0;
  if(n<0){
    flag=1;
    n=-n;
  }
}
  void reversingint(int num){
    negorpos(num);
    long long int reverse=0;
    while(num!=0){
      int digit=num%10;
      num=num/10;
      reverse=reverse*10+digit;

    }

  }

int main(){
  int m;
  cout<<"enter the value of m :";
  cin>>m;
  reversingint(m);
  if(m==1){
    m=-m;
  }

  if(m<INT_MIN || m>INT_MAX){
    return 0;
  }
  else return m;



}
