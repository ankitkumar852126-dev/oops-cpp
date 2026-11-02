// public

#include<iostream>
using namespace std;
class student {
    public:
    string name;
    int roll;
    // void setdata(){
    //     cout<<"enter your name";
    //     getline(cin,name);
    //     cout<<"enter your roll number";
    //     cin>>roll;
    // }
    void display(){
        cout<<"your name is "<<name<<endl;
        cout<<"your roll is "<< roll;
    }
};
int main(){
    student s1;
    s1.roll=12;
    s1.name="ankit kumar";
    s1.display();
}