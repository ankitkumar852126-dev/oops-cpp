#include<iostream>    
using namespace std;
class demo{
    public:
    demo(){
        cout<<"constructor is called now object is created!"<<endl;
    }
    ~demo(){
        cout<<"destructor called object is destroyed "<<endl;
    }

};
int main(){
    cout<<"main function start"<<endl;
    {
    demo d1;
    cout<<"inside the local scope block"<<endl;
    }

}