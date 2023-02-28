#include <iostream>
using namespace std;

class Person{
public:
    Person(){
        cout << "Person constructor" << endl;
    }
    virtual Person(){
        cout << "Virtual constructor" << endl;
    }
};

