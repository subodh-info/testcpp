#include <iostream>

using namespace std;

int main(){
    int a = 100;
    int b = 200;
    const int *ptr;
    ptr = &b;
    *ptr = 300;    
    cout << "value inside ptr => " << *ptr << endl;
    return 0;
}