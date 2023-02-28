#include <iostream>
using namespace std;

class A{
    protected:
    int a;
    
    public:
    void set_a(){
        cout << "Enter value of a: " << endl;
        cin >> this->a;
    }
};

class B{
    protected:
    int b;

    public:
    void set_b(){
        cout << "Enter value of b: " << endl;
        cin >> this->b;
    }
};

class C: public A{
    protected:
    int c;

    public:
    void set_c(){
        cout << "Enter value of c: " << endl;
        cin >> this->c;
    }
};

class D: public B, public C{
    
    public:
    void mul(){
        set_a();
        set_b();
        set_c();
        cout << "Result: " << a * b * c << endl;
    }
};

int main(){
    D d;
    d.mul();
    return 0;
}
