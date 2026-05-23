#include <iostream>
#include <vector>
using namespace std;
int main(){
    //for each loop
    //cleaner and shorter / prevent index related bugs
    vector<int> nums = {5, -3, 8, 7, -1, 4, 0, 9};
    for(int i : nums){//for each i inside nums
        cout<<i<<" ";
    }
}