#include <iostream>
#include <regex>
#include <string>

using namespace std;

string ltrim(const string &s){
    return regex_replace(s, regex("^\\s+"), string(""));
}

string rtrim(const string &s){
    return regex_replace(s, regex("^\\s+$"), string(""));
}

string trim(const string &s){
    return ltrim(rtrim(s));
}

int main(){
    string s = "\t\n Hello world  ";
    cout << "START :: " << trim(s) << endl;
    return 0;
}