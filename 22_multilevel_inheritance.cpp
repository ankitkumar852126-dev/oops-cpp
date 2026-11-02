#include<iostream>
using namespace std;
class grandfather{
    public:
    void showgrandfather(){
        cout<<"greandfather"<<endl;
    }
};
class father: public grandfather{
    public:
    void showfather(){
        cout<<"father"<<endl;
    }
};
class son:public father{
    public:
    void showson(){
        cout<<"son";
    }
};
int main(){
    son s1;
    s1.showgrandfather();
    s1.showfather();
    s1.showson();

}