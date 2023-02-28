#include <iostream>

using namespace std;

class One{
    int _x;
public:
    One(int x){
        this->_x = x;
    }

    int getValue(){
        return this->_x;
    }
};

class Two{
    One a;
public:
    // Two(One x){ // -------> line 1
    //     a = x;
    // }
    Two(One x): a(x){}

    void print(){
        cout << "value of _x : " << a.getValue() << endl;
    }
};

int main(){
    One a(11);
    Two two(a);
    two.print();
    return 0;
}