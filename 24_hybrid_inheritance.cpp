#include<iostream>
using namespace std;

class A {
};

class B : public A {
};

class C {
};

class D : public B, public C {
};
int main()
{
    D obj;
}