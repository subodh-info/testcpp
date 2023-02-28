#include <iostream>

using namespace std;

// this function show array decay
// passing array by value
void aDecay(int *p){
    // printing size of pointer
    cout << "Modified size of array is by passing by value: ";
    cout << sizeof(p) << endl;
}

// function to show that array decay happens
// even if we use pointer
void pDecay(int (*p)[7]){
    // printing size of array
    cout << "Modified size of array by passing by pointer : ";
    cout << sizeof(p) << endl;
}

int main(){
    int a[] {1, 2, 3, 4, 5, 6, 7};
    
    //print original size of array
    cout << "Actual size of array : "; 
    cout << sizeof(a) << endl;

    // passing a pointer to array
    aDecay(a);

    // calling function by pointer
    pDecay(&a);
    
    return 0;
}