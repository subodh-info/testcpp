#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool isOdd(int i){
    return ((i % 2) == 1);
}

int main(){
    int n1 = 3;
    vector<int> v{0, 1, 2, 3, 4};

    auto result = find(v.begin(), v.end(), n1); // find n1 is available or not in vector.
    if(result != v.end())
        cout << n1 << " is available in the vector" << endl;
    else
        cout << n1 << " is not available in the vector" << endl;
    
    auto it_if = find_if(v.begin(), v.end(), isOdd); 
    cout << "first odd vale is : " << *it_if << endl;

    auto it_if_not = find_if_not(v.begin(), v.end(), [](int i) { return i % 2 == 1; });
    cout << "first even value is : " << *it_if_not << endl;
    
    return 0;
}