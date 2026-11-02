#include<iostream>
using namespace std;
class hello{
    private:
        int num=10;
    friend class hello2;

};
class hello2{
    public:
    void hi(hello ss){
       ss.num=100;
       cout<<ss.num<<endl;
    }
};
int main(){
    hello s1;
    hello2 s2;
    s2.hi(s1);

}