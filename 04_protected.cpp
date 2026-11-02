
//protected

#include<iostream>
using namespace std;
class parent{
    protected:
    int id;
    int account_no;
};
class child:public parent{
    public:
    void getdata(){
        cout<<"enter id:";
        cin>>id;
        cout<<"account number : ";
        cin>>account_no;
    }
    void display(){
        cout<<"id is:"<<id<<endl;
        cout<<"account numberis: "<<account_no;
    }
};
int main(){
    child c1;
    c1.getdata();
    c1.display();
}

