#include<iostream>
using namespace std;
class father{
    public:
    void fatherproperty(){
        cout<<"father property"<<endl;
    }
};
class mother{
    public:
    void motherproperty(){
        cout<<"mother property"<<endl;
    }
};
class child:public father,public mother{
    public:
    void childproperty(){
        cout<<"child property"<<endl;
    }
};
int main(){
    child c1;
    c1.fatherproperty();
    c1.motherproperty();
    c1.childproperty();
}