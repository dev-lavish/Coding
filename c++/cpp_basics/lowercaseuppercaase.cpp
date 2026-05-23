#include<iostream>
#include<cstring>
using namespace std;
void convertLCtoUC(char arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]>='a' && arr[i]<='z'){
            arr[i]=arr[i]-'a'+'A';
        }
    }
}
void convertUCtoLC(char arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]>='A' && arr[i]<='Z'){
            arr[i]=arr[i]-'A'+'a';
        }
    }
}
void reverse(char arr[],int n){
int i = 0;
int j=n-1;
while(i<=j){
    swap(arr[i],arr[j]);
    i++;
    j--;
}
}
int main(){
    char arr[100];
    cout<<"enter the value of string :"<<endl;
    cin.getline(arr,100);

    // convertLCtoUC(arr,100);
    // cout<<"the modeifie string is"<<endl<<arr;
    reverse(arr,strlen(arr));//we used stlen here
    cout<<arr;
}
