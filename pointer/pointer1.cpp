#include <iostream>

using namespace std;

int main(){
    int i = 5;
    int *ptr = &i;

    cout << ptr << " : " << i << endl;

    int arr[5] = {1, 2, 3, 4, 5};
    cout << "arr : " << arr << endl;
    cout << "base address : " << &arr[0] << endl;
    cout << "array address : " << &arr << endl;

    cout << "size of pointer => " << sizeof(ptr) << endl;

    for(int i = 0; i < 5; ++i){
        //cout << *(arr + i) << endl;
        //cout << *arr + i << endl;
        cout << i[arr] << endl;
    }
    return 0;
}