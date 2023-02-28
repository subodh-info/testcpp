#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int b = 20;

    const int* const ptr = &a;
    *ptr = 12; // here we will get error
    ptr = &b; // here we will get error also.
    
    return 0;
}