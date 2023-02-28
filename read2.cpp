#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file_input;
    file_input.open("test.txt");
    char ch = 0;
    if(file_input.is_open()) {
        while(file_input.get(ch)) {
            cout << ch;
        }
    }
    else {
        cout << endl << "file not found !";
    }

    return EXIT_SUCCESS;
}