#include <iostream>
#include <string>

using namespace std;

int main(){
    string str("Geeksfor");
    // print the original string
    cout << str << endl;

    // inserting "Geeks" at 8th index
    str.insert(8, "Geeks");

    // print the modified string
    // prints "GeeksforGeeks"
    cout << str << endl;
    return 0;
}