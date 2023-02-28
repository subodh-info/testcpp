#include <iostream>
#include <sstream>

using namespace std;

int main(){
    string str;
    cout << "Enter any string :" << endl;
    cin >> str;
    stringstream ss(str); // here, normal string is converted into streamstream and stored it into ss object which is stringstream type.
    // stringstream s1 = str; --> We cannot initialize stringstream like this.
    cout << "Input string : " << ss.str(); // here we get the content of stringstream object.
    // cout << "Input string : " << ss; -> It is wrong way because, ss is stringstream object and object cannot be display like this.
    return EXIT_SUCCESS;
}