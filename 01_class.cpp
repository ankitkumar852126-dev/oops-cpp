#include <iostream>
using namespace std;

// ================= CLASS =================
class Animal {                         // 👈 CLASS

private:
    string name;                       // 👈 ENCAPSULATION
    int age;                           // 👈 ENCAPSULATION

public:
    void setData(string n, int a) {    // 👈 ENCAPSULATION
        name = n;
        age = a;
    }

    void showData() {                  // 👈 ABSTRACTION
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    virtual void sound() {             // 👈 POLYMORPHISM
        cout << "Animal makes sound" << endl;
    }
};


// ================= INHERITANCE =================
class Dog : public Animal {            // 👈 INHERITANCE

public:
    void sound() override {            // 👈 POLYMORPHISM
        cout << "Dog barks" << endl;
    }
};


int main() {

    Dog d;                             // 👈 OBJECT

    d.setData("Tommy", 3);
    d.showData();

    Animal *ptr = &d;                  // 👈 Base class pointer
    ptr->sound();                      // 👈 DYNAMIC BINDING

    return 0;
}