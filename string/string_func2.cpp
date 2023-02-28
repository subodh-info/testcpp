/* C++ program to demonstrate working of find(), rfind(),
find_first_of(), find_last_of()
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
    string str("The Geeks for Geeks");
    
    // find() returns position to the first 
    // occurence of substring "Geeks"
    cout << "first occurence of \"Geeks\" starts from : ";
    cout << str.find("Geeks") << endl;

    // prints position of first occurence of
    // any character of "reef" (Prints 2)
    cout << "First occurence of character from \"reef\" is at : ";
    cout << str.find_first_of("reef") << endl;

    // Prints position of last occurence of
    // any character of "reef" (Prints 16)
    cout << "Last occurence of character from \"reef\" is at : ";
    cout << str.find_last_of("reef") << endl;

    // rfind() returns position to last
    // occurence of substring "Geeks"
    // prints 14
    cout << "Last occurence of \"Geeks\" starts from : ";
    cout << str.rfind("Geeks") << endl;

    return 0;
}
