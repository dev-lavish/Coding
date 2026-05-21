#include<iostream>
using namespace std;
void replacebyX(char arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]==' '){
            arr[i]='X';

        }
    }
}
int main(){
    char arr[50];
    cout<<"enter your string"<<endl;
    cin.getline(arr,50,'\n');
   
    replacebyX(arr,50);
    cout<<arr;
    //after space the null char comes which mean no printinf after that
    //so we use getline function
    //get line tells when to stop the printing
    
     

}