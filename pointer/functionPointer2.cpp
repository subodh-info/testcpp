#include <iostream>

using namespace std;

int add(int a, int b){
    return a + b;
}

int main(){
    int (*funcPtr)(int, int); // declare function pointer
    funcPtr = add;
    int sum = funcPtr(4, 5); // add() function is called by function pointer.
    cout << "Result : " << sum << endl;
    return 0;
}