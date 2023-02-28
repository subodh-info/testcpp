#include <iostream>

using namespace std;

int main(){
    int i = 5;
    int *p = &i;
    int *q = p;
    cout << "p : " << p << endl;
    cout << "q : " << q << endl;
    cout << "*p -> " << p << endl;
    cout << "*q -> " << q << endl;

    (*q)++;
    cout << "i = " << *q << endl;
    cout << "i -> " << *p << endl;
    return 0;
}