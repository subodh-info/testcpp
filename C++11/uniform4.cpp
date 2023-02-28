#include <iostream>

using namespace std;

class A{
    int a, b;
public:
    A(int x, int y): a(x), b(y){}

    void show(){
        cout << a << " " << endl;
    }
};

void f(A x){
    x.show();
}

int main(){
    f({1, 2});
    return 0;
}