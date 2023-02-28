#include <iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout << "Constructing base" << endl;
    }
    ~Base(){
        cout << "Destructing base" << endl;
    }
};

class Derived: virtual public Base{
    public:
    Derived(){
        cout << "Constructing derived" << endl;
    }
    ~Derived(){
        cout << "Destructing derived" << endl;
    }
};

int main(){
    Base *base = new Derived();
    delete base;
    
    getchar();
    return 0;
}