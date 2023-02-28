#include <iostream>
#include <sstream>

using namespace std;

int main(){
    stringstream ss;
    string input_string;
    cout << "Enter any string :";
    getline(cin, input_string);
    ss << input_string;
    cout << "Input string : " << ss.str() << endl;

    ss.clear();
    string buf;
    if(ss >> buf)
        cout << "stringstream is not empty!" << endl;
    else
        cout << "stringstream is empty !" << endl;

    return EXIT_SUCCESS;
}