#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(){
    stringstream ss("23,4,56");
    int temp;
    char ch;
    while(ss >> temp){
        cout << temp << endl;
        ss >> ch;
    }
    return 0;
}