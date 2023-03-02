/*
    delete specific template specialisation
*/
#include <iostream>

using namespace std;

template <typename T>
class ComplexNumber{
    T x;
    T y;
public:
    ComplexNumber(T a, T b): x(a), y(b) {}

    // restrict to use char type as template specification
    ComplexNumber(char a, char b) = delete;

    // restrict to use double type as template specification
    ComplexNumber(double a, double b) = delete;

    void display(){
        cout << x << " + i" <<y << endl;
    }
};

int main(){
    ComplexNumber<int> obj1(1, 2);
    obj1.display(); // 1 + i2

    ComplexNumber<double> obj2(1.5, 2.3);// error: because, double type restricted to use as tempalte parameter
    obj2.display(); // 1.5 + i2.3

    ComplexNumber<char> obj3('1', '2');// error: because, char type restricted to use as tempalte parameter
    obj3.display(); // 1 + i2

    return 0;
}