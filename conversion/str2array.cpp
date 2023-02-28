#include <iostream>
#include <string>

using namespace std;

int main(){
    string s = "GeeksforGeeks";
    char *char_arr = &s[0];
    cout << char_arr << endl;
    return 0;
}