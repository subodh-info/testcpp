#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream finput;
    finput.open("test.txt", ios::app);
    string str;
    cout << endl << "Enter string : ";
    getline(cin, str);

    if(finput.is_open()) {
        finput << "\n" << str;
    }
    else {
        cout << endl << "file not found !!";
    }
    return EXIT_SUCCESS;
}