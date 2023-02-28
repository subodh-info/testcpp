#include <iostream>

using namespace std;

class Base{
    int _x;
public:
    Base(int x){
        this->_x = x;
    }

    int getValue(){
        return this->_x;
    }
};

class Child : public Base{
public:
    int _y;
    Child(int x, int y): Base{x}, _y{y}{}
    // here, Base{x} is used to initialize the data member of base class.
    // Because, data member of base class is private.
    // if data member of base class is public then there is no need to use initializer list
};

int main(){
    Child child(11, 12);
    cout << "value of _x : " << child.getValue() << endl;
    cout << "value of _y : " << child._y << endl;
    return 0;
}

