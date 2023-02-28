#include <iostream>
using namespace std;

template<class X, class Y> 
void func(X a, Y b){
    cout << "value of a : " << a << endl;
    cout << "value of b : " << b << endl;
}

int main(){
    func(15, 12.12);
    return 0;
}