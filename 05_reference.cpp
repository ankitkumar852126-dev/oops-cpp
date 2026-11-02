#include<iostream>
using namespace std;
class A{
    public:
    void swaps(int &a,int &b){
        int temp=a;
        a=b;
        b=temp;
    }
};
int main(){
    A obj;
    int x=10;
    int y=20;
    obj.swaps(x,y);
    cout<<"x="<<x<<endl;
    cout<<"y="<<y;
}