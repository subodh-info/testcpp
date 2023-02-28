#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin;
    string str;
    fin.open("test.txt");
    if(fin.is_open()) {        
       while(getline(fin, str)) {
            cout << str << endl;
       }
    }
    else {
        cout << endl << "file not found !!";
    }
    return EXIT_SUCCESS;
}