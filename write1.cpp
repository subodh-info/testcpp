#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream fout; // declare pointer to point file
    fout.open("test.txt"); // open a file
    if(fout.is_open()) {
        fout << "welcome to C++ file handling";
    }
    else {
        cout << endl << "file not found !";
    }
    return EXIT_SUCCESS;
}