#include <iostream>
#include <string>

using namespace std;

string trim(const string &s){
    auto start = s.begin();
    while(start != s.end() && isspace(*start)){
        start++;
    }

    auto end = s.end();
    do{
        end--;
    }while(distance(start, end) > 0 && isspace(*end));

    return string(start, end+1);
}

int main(){
    string s = "\n\t Hello world\r\t";
    cout << "START :: " << trim(s) << endl;
    return 0;
}