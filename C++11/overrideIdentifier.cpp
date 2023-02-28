#include <iostream>
using namespace std;

class Parent{
    public:
    virtual void display(){
        cout << "from Parent class" << endl;
    }
};

class Derived: public Parent{
    public:
    void display() override{
        cout << "from derived class" << endl;
    }
};

int main(){
    Parent *parent = new Derived();
    parent->display();

    return 0;
}