#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main(){
    array<int, 5> arr = {2, -4, 6, -9, 10};

    (any_of(arr.begin(), arr.end(), [](int x) { return x < 0; }))?
        cout << "negative elements are exist in the array" << endl :
        cout << "negative elements are not exist in the array" << endl;

    return 0;
}