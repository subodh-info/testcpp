#include <iostream>
using namespace std;
int main(){
    float f2 = 6.7;
    int x = static_cast<int>(f2);
    short int y = static_cast<int>(f2);
    cout << "value x: " << x << endl;
    cout << "value y: " << y << endl;
    return 0;
}