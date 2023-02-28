#include <iostream>

using namespace std;

int main(){
    int a[10] = {100, 206, 300, 409, 509, 601};

    int *p[] = {a, a+1, a+2, a+3, a+4, a+5};
    cout << **p << endl; // 100

    int **pp;
    pp = p;
    pp++;
    cout << *p[1] << endl; // 206
    cout << **pp << endl; // 206

    ++*pp;
    cout << **pp << endl; // 300
    cout << *p[2] << endl; // 300

    ++**pp;
    cout << **pp << endl; // 301
    cout << pp - p << endl;
    return 0;
}