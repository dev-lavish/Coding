#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num1;
    int a;
    cout<<"enter the value of number :";
    cin>>num1;
    int temp=num1;
      a=temp;
    int count=0;//not doing n!=0 the count of 0 will also be added which wwe dont want

    while(num1>0){
        num1=num1/10;
        count++;


    }
    num1=temp;
    
   
  
    int num2=0;
    while(num1!=0){
        int digit=num1%10;
        num2=num2+(int)pow(digit,count);
        num1=num1/10;
    }
    if(num2==a){
        cout<<"narssistic number :"<<num2;    }
        else{
            cout<<"non narssitic number :";

        }
}