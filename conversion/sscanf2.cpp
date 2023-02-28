#include <iostream>
using namespace std;

int main(){
    const char *str = "12345.54";
    float x;
    sscanf(str, "%f", &x);
    cout << "value of x: " << x << endl;

    double d;
    sscanf(str, "%lf", &d );
    cout << "value of d: " << d << endl;
    return 0;
}