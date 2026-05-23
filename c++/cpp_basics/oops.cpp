// //creating a class
// #include <iostream>
// using namespace std;
// class student{
//     public:
//     string name;//data member variable declared inside a class
//     int age;
//     int roll_number;
//     //member function is function declared inside a class
// };
// //the class is created and we can put multiple inputs in it
// int main(){
//     student s1;
//     s1.name="Lavish Pandir";
//     s1.age=19;
//     s1.roll_number=116;
//     student s2;
//     s2.name="Madhav Bhardwaj";
//     s2.age=19;
//     s2.roll_number=117;
//     //we have done the assignment 
//     //now giving output
//     cout<<s1.name<<" "<<s1.age<<" "<<s1.roll_number<<endl;
//     cout<<s2.name<<" "<<s2.age<<" "<<s2.roll_number<<endl;

    
// }
//construnctor:function which is invoked automatically at the time of object creation
#include <iostream>
using namespace std;
class customer{
    string name;
    int accno;
    int balance;
    public:
    customer(){
        cout<<"default constructor called :";
    }
    customer(string a,int b,int c){//parametrised contructor
        name=a;
        accno=b;
        balance=c;
        cout<<name<<" "<<accno<<" "<<balance;
    }


};
int main(){
    customer c1;//declaration of object done hence default
    //constructor called automatically
    customer c2("hi",2,4);
    //parametrised constructor called

}