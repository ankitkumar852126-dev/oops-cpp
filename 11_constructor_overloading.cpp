#include<iostream>
using namespace std;
class demo{
    public:
    demo(){
        cout<<"hello"<<endl;
    }
    demo(int x){
        cout<<x<<endl;
    }
    demo(int x, int y){
        cout<<x<<","<<y;
    }
};
int main(){
    demo s1;
    demo s2(2,5);
}