#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main(){
    array<int, 6> arr = {25, 27, 29, 31, 33, 35};

    if(none_of(arr.begin(), arr.end(), [](int k) { return k % 2 == 0; }))
        cout << "None of the element is divisible by 2" << endl;
    else
        cout << "Some elements are divisible by 2 "<< endl;
    return 0;
}