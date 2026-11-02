#include<iostream>
using namespace std;
void display(){
    cout<<"no parameter"<<endl;
}
void display(int a){
    cout<<"a="<<a<<endl;
     }
    void display(int a,int b){
    cout<<"a="<<a<<","<<"b="<<b<<endl;
    }
    void dispaly(int a,float b ){
        cout<<"a="<<a<<","<<"b="<<b;
    }
int main(){
    display(2);
    display(2,4);
    display(2,9);
    
}