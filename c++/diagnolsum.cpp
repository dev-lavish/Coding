#include <iostream>
#include <vector>
using namespace std;
int main(){
int row;
cout<<"enter the value of row ?";
cin>>row;
int col;
cout<<"enter the value of column?";
cin>>col;
int size=row;
vector<vector<int>> arr(row,vector<int>(col,0));


for(int i=0;i<row;i++){
    for(int j=0 ; j<col;j++){
        cin>>arr[i][j];
    }
}
for(int i=0;i<row;i++){
    for(int j=0 ; j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
//diagonal sum
int sum=0;
for(int i=0;i<row;i++){
  sum=sum+ arr[i][i];
}
for(int i=0;i<row;i++){
    sum=sum + arr[i][row-i-1];
  

        }
if (size & 1){//for odd number
    sum=sum-arr[size/2][size/2];
}     
cout<<"the  diagonal sum of the array is "<<sum;




}
