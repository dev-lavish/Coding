// #include <iostream>
// #include <vector>
// using namespace std;//defining vectors
// int main(){
// vector<int> marks(5,-1);//we created 5 blocks and assigned -1
// cout<<"to print size "<<marks.size()<<endl;
// marks.push_back(2);//we added an element at back
// cout<<marks.size()<<endl;
// marks.pop_back();
// cout<<marks.size()<<endl;
// //for traversing inside a vector we need to create an iterator
// cout<<*(marks.begin())<<endl;//to print an element of array
// marks[0]=100;//assigens an element to 1 vector block
// cout<<*(marks.begin())<<endl;
// marks.empty();//it return true or false not empty the array

// marks.push_back(80);
// //to add element at particular location
// marks.insert(marks.begin(),10);
// marks.insert(marks.begin()+1,3);
// cout<<marks.size()<<endl;
// //to erase an element fromt particular place
// marks.erase(marks.begin());
// //creating an iterator to traverse
// // vector<int> :: iterator it=marks.begin();//use this syntax
// // while(it!=marks.end()){
// //     cout<<*it<<endl;
// //     it++;
// // }
// //to tell max block allocated at a time
// cout<<marks.capacity()<<endl;
// //to clear all the elements of the vector
// marks.clear();
// cout<<marks.size()<<endl;//hence we cleared all the elements of the array
// //using swap
// vector <int> first;
// vector<int> second;
// first.push_back(10);
// first.push_back(20);
// first.push_back(30);
// first.push_back(40);
// first.push_back(50);
// // before swapping
// vector<int> :: iterator it=first.begin();
// while(it!=first.end()){
//     cout<<*it<<endl;
//     it++;
// }

// second.push_back(100);
// second.push_back(200);
// second.push_back(300);
// second.push_back(400);
// second.push_back(500);
// //after swapping
// first.swap(second);
// vector<int>::iterator mt=first.begin();
// while(mt!=first.end()){
//     cout<<*mt<<endl;
//     mt++;
// }




// }/
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of the elements ";
//     cin>>n;
//     vector<int>arr(n);

    
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     vector<int>::iterator it=arr.begin();
//     while(it!=arr.end()){
//         cout<<*it<<endl;
//         it++;
//     }

// }
//vector of vector means 2D or multi-D arrays
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<vector<int>>arr(4,vector<int>(4,0));
//     vector<vector<int>>::iterator it=arr.begin();
//     while(it!=arr.end()){
//         cout<< *it<<" "<<endl;
//         it++;
//     }
// }
