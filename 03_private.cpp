//private

#include<iostream>
#include<string>
using namespace std;
class student {
    private:
    int roll ;
    string name;
    
    public:
    void setdata(){
        cout<<"enter your name ";
        getline(cin,name);
        cout<<"enter your roll";
        cin>>roll;
    }
    void display(){
        cout<<"your name is "<<name<<endl;
        cout<<"your roll is "<<roll;
    }
};
int main(){
    student s1;
    s1.setdata();
    s1.display();
}