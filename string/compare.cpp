#include <iostream>
#include <string>

using namespace std;

int main(){
    string str("geeksforgeeks");
    string str1("geeksforgeeks");
    // comparing strings using compare()
    if(str.compare(str1) == 0){
        cout << "String are equal" << endl;
    }
    else{
        cout << "string are unequal" << endl;
    }
    return 0;
}