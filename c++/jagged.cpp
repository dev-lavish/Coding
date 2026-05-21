#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<vector<int>>arr(4);
  arr[0]=vector<int>(4);
   arr[1]=vector<int>(2);
    arr[2]=vector<int>(5);
     arr[3]=vector<int>(3);
     //using for each loop
     //input
     cout<<"enter the elements/n:";
     for(auto &row :arr){
        for(auto &x: row){
            cin>>x;
        }
     }
     //output
     cout << "\nJagged Array:\n";
     for (const auto &row : arr) {
        for (const auto &x : row) {
            cout << x << " ";
        }
        cout << endl;
    }
     



}
