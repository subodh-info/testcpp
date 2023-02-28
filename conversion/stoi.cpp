#include <iostream>
#include <string>
using namespace std;
int main(){
    const char *str1 = "42";
    const char *str2 = "3.14159";
    const char *str3 = "31337 geek";

    int num1 = stoi(str1);
    int num2 = stoi(str2);
    int num3 = stoi(str3);

    cout << str1 << " = " << num1 << endl;
    cout << str2 << " = " << num2 << endl;
    cout << str3 << " = " << num3 << endl;

    return 0;
}