#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream finput;
    finput.open("test.txt");
    ofstream foutput;
    foutput.open("file1.txt");
    char ch;
    if(finput.is_open() && foutput.is_open()) {
        while(finput.get(ch)) {
            foutput << ch;
        }
    }
    else {
        cout << endl << "file is not found...";
    }
    return EXIT_SUCCESS;
}