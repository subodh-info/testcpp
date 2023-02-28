#include <iostream>
#include <sstream>

using namespace std;

int main(){
    int num = 2016;
    ostringstream str1; // declareing output string stream
    str1 << num; //sending a number as a stream into output string
    string geek = str1.str(); // str converts number into string.

    // display result
    cout << "the newly formed string from number is : " << geek << endl;
    return 0;
}