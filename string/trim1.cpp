#include <iostream>
#include <string>

using namespace std;

const string WHITESPACE = "\n\r\t\f\v";

// remove leading space
string ltrim(const string &s){ // remove space from the left side of string
    
    // find_first_not_of() searches the string for the first character that does
    // not match any of the character specified in its arguments. 
    size_t start = s.find_first_not_of(WHITESPACE); // here, returns the first occurrence index of that character which is not available in the WHITESPACE string.
    return (start == string::npos) ? "" : s.substr(start);
}

// remove tailing space
// means remove space available right side or at the end of string.
string rtrim(const string &s){

    // find_last_not_of() seaches the string for the last character that does 
    // not match any of the character specified in its arguments
    size_t end = s.find_last_not_of(WHITESPACE); // here, returns the last occurence index of that character which is not available in the WHITESPACE
    return (end == string::npos) ? "" : s.substr(0, end + 1); // +1 because, end index is not included
}

// remove leading and tailing space from string
string trim(const string &s){
    return (rtrim(ltrim(s)));
}

int main(){
    string s = "\n\tHello world\r\n";
    cout << "START :: " << trim(s) << endl;
    return 0;
}