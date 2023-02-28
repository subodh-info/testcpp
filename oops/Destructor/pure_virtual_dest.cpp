#include <iostream>
using namespace std;

class Base{
    public:
    virtual ~Base() = 0;// pure virtual destructor
};

Base :: ~Base(){
    cout << "pure virtual destructor is called" << endl;
}

class Derived: public Base{
    public:
    ~Derived(){
        cout << "~Derived() executed" << endl;
    }
};

int main(){
    Base *b = new Derived();
    delete b;
    return 0;
}