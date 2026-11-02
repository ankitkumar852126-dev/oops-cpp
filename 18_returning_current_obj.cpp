#include<iostream>
using namespace std;
class student {
    private:
    int roll;
    public:
    void setroll(int roll){
        this->roll=roll;
        
    }
    void display(){
        cout<<roll;
    }

};
int main(){
    student s1;
    s1.setroll(12);
    s1.display();

}