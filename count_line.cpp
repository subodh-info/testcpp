#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream finput;
    finput.open("test.txt");
    int count = 0, count_ch = 0;
    string str;
    if(finput.is_open()) {
        while(getline(finput, str)) {
            count++;
            count_ch = count_ch + str.length();
            cout << str;
        }
        finput.close();
        cout << endl << "total line : " << count << endl << "total character : " << count_ch << endl << "file size : " << count_ch << " bytes";
    }
    else {
        cout << endl << "file not found !";
    }
    return EXIT_SUCCESS;
}