// #include<iostream>
// using namespace std;
// class student{
//     public:
//     student(){
//         cout<<"constructor is called";
//     }
// };
// int main(){
//     student s1;
//     cout<<endl<<"programming is running ";
// }

//parameterized constructor.

#include<iostream>
using namespace std;
class student{
    private:
    int x;
    public:
    student(int roll){
        cout<<roll;
    }
};
int main(){
    student s1(345);
}
