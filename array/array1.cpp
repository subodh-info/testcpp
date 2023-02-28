#include <iostream>
#include <array>
#include <algorithm> // for sort()

using namespace std;

int main(){
    array<int, 5> arr1{3, 4, 5, 1, 2};
    array<int, 5> arr2 = {1, 2, 3, 4, 5};
    array<string, 2> arr3 = {string("hello"), string("world")};

    cout << "Size of arrays arrays : " << endl;
    cout << "arr1 -> " << arr1.size() << endl;
    cout << "arr2 -> " << arr2.size() << endl;
    cout << "arr3 -> " << arr3.size() << endl;

    cout << "arr1 elements without sorting : ";
    for(int i = 0; i < arr1.size(); ++i){
        cout << arr1[i] << " ";
    }
    cout << endl;

    // container operations are supported
    sort(arr1.begin(), arr1.end());
    cout << "arr1 elements after sorting : ";
    for(auto i : arr1){
        cout << i << " ";
    }
    cout << endl;

    // filling arr2 with 10
    arr2.fill(10);// here, arr2 is filled 10 for arr2.size() times
    // elements in arr2 : 10 10 10 10 10
    cout << "arr2 elements : ";
    for(auto i : arr2){
        cout << i << " ";
    }
    cout << endl;

    cout << "arr3 elements : ";
    for(auto s : arr3){
        cout << s << " ";
    }
    cout << endl;

    return 0;
}