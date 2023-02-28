#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> v{1, 2, 3, 4, 4, 3, 7, 8, 9, 10};

    // count the frequency of 3
    int target = 3;
    int num_items = count(v.begin(), v.end(), target); // here element is compare with target like target == vector's each element.
    cout << "Number of frequencey => " << num_items << endl;

    // using lambda expression
    // count the number of element that are divisible by 3
    int num_count = count_if(v.begin(), v.end(), [](int i) { return i % 3 == 0; });
    cout << "number of elements divisible by 3 : " << num_count << endl;
    return 0;
}