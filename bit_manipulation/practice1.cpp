/*
    1. You are given a number n.
    2. Print the number produced on setting its i-th bit. (this problem to ON bit)
    3. Print the number produced on unsetting its j-th bit. (this problem to OFF bit)
    4. Print the number produced on toggling its k-th bit. (this problem to toggle bit)
    5. Also, check its m-th bit is on or off, print 'true' if it is on, otherwise print 'false'.
*/

#include <iostream>
using namespace std;
#include <math.h>
int main(){
    int n = 15;
    int i = 4;
    int j = 3;
    int k = 3;
    int m = 3;

    int onmask = (1 << i);
    int ofmast = ~(1 << j);
    int tmask = (1 << k);
    int cmask = (1 << m);

    cout << "ON => " << (n | onmask) << endl; // OR operator (|) is used for bit ON.
    cout << "OFF => " << (n & ofmast) << endl; // & is used for bit OFF.
    cout << "toggle => " << (n ^ tmask) << endl; // ^ is used for bit toggle.
    cout << (((n & cmask) == 0)? "false" : "true") << endl;

    return 0;
}