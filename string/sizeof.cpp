// C program to demonstrate incorrect use of sizeof for array
#include <iostream>

using namespace std; 

void fun(int arr[]){
    int i; 

    // size of should not used here to get number 
    // of element in array
    int arr_size = sizeof(arr)/sizeof(arr[0]); // here, compiler show error.

    for (int i = 0; i < arr_size; ++i){
        arr[i] = i;
    }
    // executed two times only
}

int main(){
    int i;
    int arr[4] = {0, 0, 0, 0};
    fun(arr);

    // use of sizeof is fine here
    cout << "\noriginal array element => " << endl;
    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i){
        cout << arr[i] << endl;
    }
    return 0;
}