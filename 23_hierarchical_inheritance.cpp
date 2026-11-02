#include<iostream>
using namespace std;
class animal{
    public:
    void eat(){
        cout<<"animal is eating"<<endl;
    }
};
class cat:public animal{
    public:
    void meow(){
        cout<<"cat meow"<<endl;
    }
};
class dog:public animal{
    public:
    void bark(){
        cout<<"dog is barking"<<endl;
    }
};
int main(){
    cat c1;
    dog d1;
    c1.eat();
    c1.meow();

    d1.eat();
    d1.bark();

}