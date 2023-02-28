#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

int main(){
    vector<int> nums = {1, 20, 3, 89, 2};

    // sort the vector in descending order
    sort(nums.begin(), nums.end(), greater<int>());

    for(auto num: nums){
        cout << num << " ";
    }
    return 0;
}