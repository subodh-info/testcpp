#include <iostream>

using namespace std;

class A{
    public:
    A(int x){
        cout << "this is a parameterized constructor" << endl;
    }
    A() = default;
};

int main(){
    A a; // it executes usig defaulted constructor.
    A x(1); // it executes using parameterized constructor.
    return 0;
}