#include <iostream>
#include <string>

using namespace std;

int main(){
    string s = "GeeksforGeeks";

    char *char_array = new char[s.length() + 1]; // +1 is used for storing NULL value at the end.

    // now, stores null value
    char_array[s.length()] = '\0';

    for(int i = 0; i < s.length(); ++i){
        char_array[i] = s[i];
    }

    cout << char_array << endl;
    
    delete char_array;

    return 0;
}
