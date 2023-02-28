#include <iostream>
using namespace std;

class Demo{
    public:
    int a, b; 
    int *p;

    Demo(){
        p = new int;
    }

    Demo(Demo &d){
        a = d.a;
        b = d.b;
        p = new int;
        *p = *(d.p);
    }

    void setData(int a, int b, int p){
        this->a = a;
        this->b = b;
        *(this->p) = p;
    }

    void showData(){
        cout << "a : " << this->a << endl << "b : " << this->b << endl << "p : " << *(this->p) << endl;
    }
};

int main(){
    Demo d1;
    d1.setData(4, 5, 7);
    d1.showData();

    cout << "\nSecond object => " << endl;
    Demo d2 = d1;
    d2.showData(); 

    *(d2.p) = 13; // changing the value of p.
    cout << "\nAfter changing the value in second object => " << endl;
    cout << "\nSecond object data => " << endl;
    d2.showData();

    cout << "\nFirst object data ==> " << endl;
    d1.showData();
    return EXIT_SUCCESS;
}
 