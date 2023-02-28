#include <iostream>
using namespace std;

int main(){
    const char *str = "12345 def";
    int x;
    int y;
    cout << "result : " << sscanf(str, "%d%d", &x, &y) << endl;

    cout << "the value of x : " << x << endl;
    cout << "the value of y : " << y << endl;
    return 0;
}