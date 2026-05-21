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
//transpose of the matrix
int rowtranspose = col;
int coltranspose = row;
vector<vector<int>>transpose (rowtranspose,vector<int>(coltranspose,0));
cout<<"the tranpose of the matrix goes as follows :";
cout<<endl;

for(int i=0;i<rowtranspose;i++){
    for(int j=0;j<coltranspose;j++){
        transpose[i][j]=arr[j][i];
    }

}
for(int i=0;i<rowtranspose;i++){
    for(int j=0 ; j<coltranspose;j++){
        cout<<transpose[i][j]<<" ";
    }
    cout<<endl;
}




}