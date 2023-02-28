#include <iostream>

using namespace std;

// a function that prevents array decay
// by passing array by reference
void fun(int (&p)[7]){
    // Printing size of array
    cout << "Modified size of array by passing by reference: ";
    cout << sizeof(p) << endl;
}

int main(){
    int a[7] {1, 2, 3, 4, 5, 6, 7};

    // Printing original size of array
    cout << "Actual size of array is: ";
    cout << sizeof(a) << endl;

    // calling function by reference
    fun(a);
    
    return 0;
}