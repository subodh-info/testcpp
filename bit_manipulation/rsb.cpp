#include <iostream>
using namespace std;
int main(){
    int n = 72;
    cout << "right most set mask => " << (n & -n) << endl;
    return 0;
}