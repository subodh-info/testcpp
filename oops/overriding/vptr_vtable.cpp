#include <iostream>
using namespace std;

class Parent{
    public:
    void fun_1(){ cout << "base-1\n";}
    virtual void fun_2() { cout << "base-2\n";}
    virtual void fun_3() { cout << "base-3\n";}
    virtual void fun_4() { cout << "base-4\n";}
};

class Derived: public Parent{
    public:
    void fun_1() { cout << "derived-1\n";}
    void fun_2() { cout << "derived-2\n";}
    void fun_4(int x) { cout << "derived-4\n";}
};

int main(){
    Parent *p;
    Derived derived;
    p = &derived;

    p->fun_1(); // early binding because, fun_1 is non-virtual function

    p->fun_2(); // late binding, (runtime polymorphism)

    p->fun_3(); // late binding, (runtime polymorphism). It is not overriden in derived class and it is virutal function so base class version is called. 

    p->fun_4(); //It is not overridden so base class version is called. similar to fun_3().
}