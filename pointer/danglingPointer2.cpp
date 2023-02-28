#include <iostream>

using namespace std;

int* fun(){
    int y = 10;
    return &y;
}

int main(){
    int *p = fun();
    cout << *p << endl;
    return 0;
}