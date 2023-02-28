#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int arr[7] = {2, 4, 6, 5, 10, 3, 14};
    any_of(arr, arr + 7, [](int k) { return k%2 == 0; }) ?
        cout << "There are elements which exist in the table of 2" << endl:
        cout << "No elements in the table of 2 exists" << endl;
    return 0;
}