#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    const char *str1 = "42.245";
    double num1 = atof(str1);
    cout << "atof(\"" << str1 << "\") is " << num1 << endl;
    return 0;
}