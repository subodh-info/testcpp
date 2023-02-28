#include <iostream>
using namespace std;
void tokenize(string s, string del = " "){
    int start, end = -1*del.size();
    do{
        start = end + del.size();
        end = s.find(del, start);
        cout << s.substr(start, end-start) << endl;
    }while(end != -1);
}

int main(){
    string str = "How$%do$%you$%do$%!";
    tokenize(str, "$%");
    return 0;
}