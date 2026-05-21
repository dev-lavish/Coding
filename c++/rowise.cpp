#include <iostream>
using namespace std;
//rowise traversal 
// void printrowise(int arr[][3],int m,int n){
//     for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//    }

//col wise traversal
// }
// void printcolwise(int arr[][2],int row,int col){
//         for(int i=0;i<col;i++){
//     for(int j=0;j<row;j++){
//         cout<<arr[j][i]<<" ";
//     }
//     cout<<endl;
//    }

// }

// int main(){
    // to print rowise we need to pass the size of the column
    //(c*i)+j
    // int arr[3][2]={
    //     {1,2},
    //     {2,3},
    //     {4,8}//declaration of the elements has been done

    // };
    // printrowise(arr,3,3);
    // // cout<<endl;
    // printcolwise(arr,3,2);
   
//    int m;
//    cout<<"enter the va;ue of m ";
//    cin>>m;
//    int n;
//    cout<<"enter the va;ue of n ";
//    cin>>n;
//    int arr[m][n];
//    for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//         cin>>arr[i][j];
//     }
    
//    }
    
// }


//2 rowise sum
int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}

    };
    int count=0;
     
        for(int i=0;i<3;i++){
             count=0;
            for(int j=0;j<3;j++){
                count=count+arr[i][j];
               
            }
           
             cout<<"count of row "<<i+1<<" "<<count<<endl;
            cout<<endl;
        }

}