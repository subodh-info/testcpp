#include <iostream>

using namespace std;
char *str = "Hello"; // it is created in a read-only area

int main(){
    cout << str << endl;
    str[0] = 'Y';
    cout << str << endl;
    return 0;
}
