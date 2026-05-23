// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value of n :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
        
//         for(int j=1;j<=n-i;j++){
//             cout<<"  ";

//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"* ";
//         }
       
//         cout<<endl;
//     }
// }

//inveeted pyramid keep in mind that value of n is fixed 

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int k=0;k<i;k++){
//             cout<<"  ";
//         }
//         for(int j=n+1-i;j>0;j--){
//             cout<<"* ";
//         }
//         for(int m=1;m<n+1-i;m++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }this one has 3 loops in it so avoid using it
// #include <iostream>//instead use this with a logic of stars
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value of n :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i-1;j++){
//             cout<<"  ";
//         }
//         for(int k=1;k<=((n*2)-(2*i)+1);k++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     cout<<endl; }

//hollow pyramid
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value of n :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int l=1;l<=n-i;l++){
//             cout<<"  ";
//         }
//        if(i==1 || i==n) {for(int m=1;m<=(2*i)-1;m++){
            
//                 cout<<"* ";
            
//         }    
//         }
//          else{
//                 cout<<"* ";
//                 for(int j=1;j<=(2*i)-3;j++){
//                     cout<<"  ";
//                 }
//                 cout<<"* ";
//             }
//         cout<<endl;
//     }
// }
