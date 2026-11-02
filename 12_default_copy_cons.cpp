#include<iostream>
using namespace std;
class A{
    private:
    int x,y;
    public:
    A(int i,int j){
        x=i;
        y=j;
    }
    int getx(){
        return x;
        // cout<<x;
        // return 0;
    }
    int gety(){
        return y;
        // cout<<y;
    }
};
int main(){
    A obj1(41,64);
    A obj2=obj1;
    cout<<"x="<<obj2.getx()<<endl;
    cout<<"y="<<obj2.gety();
    return 0;
}