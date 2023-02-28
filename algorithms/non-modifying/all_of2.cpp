#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int arr[6] {2, 5, 7, 9, 3, 5};

    all_of(arr, arr + 6, [](int x){ return x >0 ;}) ?
        cout << "All the array elements are positive" << endl:
        cout << "All the array elements are not positive" << endl;
        
    return 0;
}