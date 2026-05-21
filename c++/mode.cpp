#include<iostream>
#include<limits.h>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"what is the size?";
    cin>>n;
    vector<int> arr;
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }

    vector<int> temp = arr;   // copy (original not modified)
    sort(temp.begin(), temp.end());

    int mode = temp[0];
    int maxFreq = 1;
    int currFreq = 1;

    for (int i = 1; i < temp.size(); i++) {
        if (temp[i] == temp[i - 1]) {
            currFreq++;
        } else {
            currFreq = 1;
        }

        if (currFreq > maxFreq) {
            maxFreq = currFreq;
            mode = temp[i];
        }
        else if (currFreq == maxFreq) {
            mode = min(mode, temp[i]);   // 🔑 tie → lowest value
        }
    }
    cout<<"the mode of the array is"<<mode;
//something wrong


}
