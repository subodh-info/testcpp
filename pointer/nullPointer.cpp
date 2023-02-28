#include <iostream>
using namespace std;

int main(){
    int *ptr;
    cout << "Address : " << ptr << endl;
    cout << "value : " << *ptr << endl; // dereferencing the illegal pointer
    return 0;
}