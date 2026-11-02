#include<iostream>
using namespace std;
int add(int a=10,int b=23,int c=85){
    return a+b+c;
}
int main(){
    cout<<add(2)<<endl;
    cout<<add(2,5)<<endl;
    cout<<add(8,5,3)<<endl;
}
