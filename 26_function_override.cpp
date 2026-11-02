// #include<iostream>
// using namespace std;
// class hello{
//     public:
//     virtual void hi(){
//         cout<<"main function";
//     }
// };
// class hello2:public hello{
//     public:
//     void hi() override{
//         cout<<"child of hello";
//     }
// };
// int main()
// {
//     hello* s1;
//     hello2 s2;
//     s1=&s2;
//     s1->hi();

// }
#include<iostream>
using namespace std;
int main(){
    int roll;
    string name;
    cin>>roll;
    getline(cin,name);
    cout<<roll;
    cout<<name;
}