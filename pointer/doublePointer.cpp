#include <iostream>

using namespace std;

int main(){
    int num = 10;
    int *p;
    int **ptr;
    p = &num;
    ptr = &p;

    cout << "value inside p => " << *p << endl;
    cout << "value inside ptr => " << **ptr << endl;
    return 0;
}