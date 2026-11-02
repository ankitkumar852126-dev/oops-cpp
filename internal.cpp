// #include <iostream>
// using namespace std;

// class Mobile {
//     string brand;
//     string  model;
//     float price;

// public:


//     Mobile(string b, string m, float p) {
//         brand = b;
//         model = m;
//         price = p;
//     }

//     void display() {
//         cout << "Brand: " << brand << endl;
//         cout << "Model: " << model << endl;
//         cout << "Price: " << price << endl;
//     }

//     float getPrice() {
//         return price;
//     }
// };

// int main() {
//     Mobile m[5] = {
//         Mobile("Samsung", "S24", 60000),Mobile("Apple", "iPhone 15", 70000),Mobile("OnePlus", "13R", 45000),
//         Mobile("Vivo", "X200", 55000),
//         Mobile("Google", "Pixel 9", 65000)
//     };

//     int highest = 0;
//     for (int i = 1; i < 5; i++) {
//         if (m[i].getPrice() > m[highest].getPrice()) {
//             highest = i;
//         }
//     }

//     cout << "Mobile with highest price:" << endl;
//     m[highest].display();

//     return 0;
// }




//virtual and override

// #include<iostream>
// using namespace std ;
// class hello{
//     public:
//     virtual void hi(){
//         cout<<"this is parent class";
//     }
// };
// class hello2: public hello{
//     public:
//     void hi()override{
//         cout<<"this is child classs";
//     }
// };
// int main(){
//     hello* s1;
//     hello2 s2;
//     s1=&s2;
//     s1->hi();

// }
// //operator overloading .
// #include<iostream>
// using namespace std;
// int main(){

// }

#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;

    
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k];

            }cout<<",";
        }
        cout<<endl;
    }
}




// diff static and dynamic.
// diff stack and heap.
// diff structure and union 
// constructor and distructor 
// new and delete
//  structure and class 
//  public and private
//  virtual and pure virtual
//  method overloding and function overlodung
//  compile time and run time
//  normal class vs abstract class
// operator overloading and function overloading

//linkdin
//github
//leetcode
//hackerrank
//codeship

