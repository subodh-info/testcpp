#include <iostream>

using namespace std;

class A{
    int a, b;
public:
    // constructor
    // data member are initialized with 
    // uniform initialization
    A(int x, int y): a(x), b(y){

    }

    void show(){
        cout << a << " " << b << endl;
    }
};

A f(int a, int b){
    // here, compiler automatically
    // deduces that the constructor 
    // of the class A needs to be called
    // and the function parameter of f are
    // needed to be passed here.
    return {a, b};
}
int main(){
    A x = f(12, 2);
    x.show();
    return 0;
}