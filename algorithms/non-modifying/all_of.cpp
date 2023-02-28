#include <iostream>
#include <algorithm>
#include <array> // for array template

using namespace std;

int main(){
    array<int, 6> arr = {25, 27, 29, 31, 33, 36};

    if(all_of(arr.begin(), arr.end(), [](int k){ return k%2; })){
        cout << "All the array elements are odd" << endl;
    }
    else{
        cout << "All the array elements are not odd" << endl;
    }
    return 0;
}
