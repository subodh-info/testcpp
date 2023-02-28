#include <iostream>
using namespace std;

template <class T1, class T2>
class A {
    T1 a;
    T2 b;

    public:
    A(T1 x, T2 y){
        this->a = x;
        this->b = y;
    }

    void display(){
        cout << "value of a and b are : " << a << ", " << b << endl;
    }
};

int main(){
    A<int, double> d(5, 6.5);
    d.display();
    return 0;
}