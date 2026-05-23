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
vector<vector<int>> matrix(row,vector<int>(col,0));
for(int i=0;i<row;i++){
    for(int j=0 ; j<col;j++){
        cin>>matrix[i][j];
    }
}
int startrow=0;
int startcol=0;
int endrow=row-1;
int endcol=col-1;
vector<int>arr;

//logic-> if any row or colummn is existing we print that
//in 4 steps 1->print starting row 2-> print end col 3-> print end row 
//4->print starting col
while(startrow<=endrow && startcol<=endcol){
     //print starting row
          if(startrow<=endrow){
     for(int col=startcol;col<=endcol;col++){
        arr.push_back(matrix[startrow][col]);
     }
     startrow++; }
     
     //printing ending column
     if(startcol<=endcol){
     for(int row=startrow;row<=endrow;row++){
        arr.push_back(matrix[row][endcol]);

     }
     endcol--;}
    
     //printing the ending row
     if(startrow<=endrow){
     for(int col=endcol;col>=startcol;col--){
        arr.push_back(matrix[endrow][col]);
     }
     endrow--; }
     //printing the starting column
     if(startcol<=endcol){
     for(int row=endrow;row>=startrow;row--){
        arr.push_back(matrix[row][startcol]);
     }
     startcol++;
    }


}


vector<int> :: iterator it= arr.begin();
while(it!=arr.end()){
    cout<<*it<<" ";
    it++;
}

                                     






}