#include <iostream>
using namespace std;
int main(){
    int target=9;
    int arr[5]={23,45,66,77,88};
    bool found=false;
    /*false means no and true means yes
    so first we assume is that value is not found the we put the 
    coditioon value ==target found=true this is how we use bool 
    function*/
    for(int i=0;i<5;i++){
        int value=arr[i];
        if(value==target){
            found=true;
            
             }
        
        //break;this takes immedeiately out if the code

        
    }
    if(found){
        cout<<"we found the value :";
    }
    else{
        cout<<"we are unable to find the value ";
    }
}