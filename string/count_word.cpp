#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(){
    string init_string = "Welcome to C++ computer programming language";
    stringstream ss(init_string);
    vector<string> words;
    string buf;
    while(ss >> buf) { // here, >> operator is used read string from stringstream object and stored into specified variable.
        words.push_back(buf);
    }

    for(auto itr = words.begin(); itr != words.end(); ++itr){
        cout << *itr << endl;
    }
    return EXIT_SUCCESS;
}