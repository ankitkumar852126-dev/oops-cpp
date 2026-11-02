#include<iostream>
using namespace std;
class student {
    public:
    void id(int id){
        cout<<"id is="<<id<<endl;
    }
};
class teacher:public student{
    public:
    void salary(int x){
        cout<<"salary="<<x;
    }

};
int main(){
    teacher t1;
    t1.id(45695674567);
    t1.salary(10000);
}