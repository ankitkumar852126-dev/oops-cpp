#include<iostream>
using namespace std;
class hello{
    public:
    int num;
    hello(int a){
        num=a;
    }
    void operator++(){
        ++num;
    }
    void hi(){
        cout<<"this is update value of num="<<num<<endl;
    }
};
int main(){
    hello s1(100);
    ++s1;
    s1.hi();
}