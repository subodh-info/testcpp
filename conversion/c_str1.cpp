#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string s = "geeksforgeeks";
    const int length = s.length();

    // declareing char array (+1 for null termination)
    char *char_array = new char[length + 1];

    // copying the contents of the string to char array
    strcpy(char_array, s.c_str());

    // display record
    for(int i = 0; i < length; ++i){
        cout << char_array[i] ; 
    }
    return 0;
}