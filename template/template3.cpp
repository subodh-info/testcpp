#include <iostream>

using namespace std;

template<class X>
void func(X a){
    cout << "value of a : " << a << endl;
}

template<class X, class Y>
void func(X a, Y b){
    cout << "value of a : " << a << endl;
    cout << "value of b : " << b << endl;
}

int main(){
    func(10);
    func(20, 30.5);
    return 0;
}