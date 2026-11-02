// #include<iostream>
// using namespace std;
// class hello{
//     public:
//         virtual void hi(){
//             cout<<"parent class"<<endl;
//         }

// };
// class hello2:public hello{
//     public:
//         void hi()override{
//             int c,d;
//             cin>>c,d;
//             cout<<c+d<<endl;
//             cout<<"child class"<<endl;
//         }
// };
// int main(){
//     hello* s1;
//     hello2 s2;
//     s1=&s2;
//     s1->hi();

// }

#include<iostream>
using namespace std;
class hello{
    public:
    int num;
    void hi(){
        cout<<"enter a number"<<endl;
        cin>>num;
    }
    bool operator <(hello ss){
        return num<ss.num;
    }
    int hi2(){
        return num;
    }
};

int main(){
    hello s1,s2;
    s1.hi();
    s2.hi();
    if(s1<s2){
        cout<<"smallest number is="<<s1.hi2()<<endl;
    }
    else {
        cout<<"smallest number is"<<s2.hi2()<<endl;
    }
}