#include <iostream>
#include <string> // for to_string() method
using namespace std;

int main(){
    int i_val = 20;
    float f_val = 30.50;

    // conversion of int into string using 
    // to_string()
    string stri = to_string(i_val);

    // conversion of float into string using
    // to_string()
    string strf = to_string(f_val);

    cout << "the integer in string is : " << stri << endl;
    cout << "the float in string is : " << strf << endl;
    return 0;
}