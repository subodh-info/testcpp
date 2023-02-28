#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void printX(int b){
    cout << b *2 << " ";
}

struct class1{
    void operator ()(int b){
        cout << b * 3 << " ";
    }
}obj1;

int main(){
    int arr[5] = {6, 7, 8, 9, 10};
    cout << "Using array -> " << endl;
    cout << "Multiplication of 2 of elements are : ";
    for_each(arr, arr + 5, printX); // here, printX applies on each element of array
    cout << endl;
    cout << "\nMultipl of 3 of elements are: ";
    for_each(arr, arr + 5, obj1);
    cout << endl;

    vector<int> v1 = {2, 3, 5, 7, 1};
    cout << "Using vector : " << endl;
    for_each(v1.begin(), v1.end(), printX);
    cout << endl;
    for_each(v1.begin(), v1.end(), obj1);
    cout << endl;
    
    return 0;
}