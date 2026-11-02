#include<iostream>
using namespace std;
class A{
    public:
    int a=10;
};

class B{
    public:
    int b=20;
};

class C:public A{
    public:
    int c=30;
};

class D:public B{
    public:
    int d=40;
    void hi(){
        cout<<b+d<<endl;
    }
};

int main(){
    D s4;
    s4.hi();
   
}