#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string str = "we are trying to get an idea of the find_first_of function in C++";
    string patt = {'a','A','e','E','i','I','o','O','u','U'};
    auto pi = find_first_of(str.begin(), str.end(), patt.begin(), patt.end());
    cout << "first vowel has discovered at index : " << (pi - str.begin()) << endl;
    return 0;
}