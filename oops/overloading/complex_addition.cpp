#include <iostream>
using namespace std;

class Complex{
    int real, imag;

    public:
    Complex(){}
    Complex(int real, int imag){
        this->real = real;
        this->imag = imag;
    }

    Complex operator +(const Complex &com){
        Complex complex;
        complex.real = this->real + com.real;
        complex.imag = this->imag + com.imag;
        return complex;
    }

    friend ostream& operator << (ostream &os, const Complex &com){
        os << com.real << " + " << com.imag << "i";
        return os;
    }
};

int main(){
    Complex c1(3, 4), c2(9, 8);
    Complex c3 = c1 + c2;
    cout << c3;
    return 0;
}