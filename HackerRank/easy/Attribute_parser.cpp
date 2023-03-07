#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string temp = "<tag1 value = \"HelloWorld\">";
    temp.erase(remove(temp.begin(), temp.end(), '\"'), temp.end());
    
    cout << temp << endl;
    return 0;
}