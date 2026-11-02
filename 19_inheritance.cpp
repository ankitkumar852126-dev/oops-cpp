#include<iostream>
using namespace std;
class animal{
    public:
    void eat(){
        cout<<"dog is eating"<<endl;
    }
};
class dog:public animal{
    public:
    void bark(){
        cout<<"dog is barking";
    }
};
int main(){
    dog d1;
    d1.eat();
    d1.bark();
}