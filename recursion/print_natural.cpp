#include <iostream>
using namespace std;

void printNumber(size_t n){
    if(n <= 15){
        cout << n << endl;
        printNumber(n+1);
    }
}

int main(){
    printNumber(1);
    return EXIT_SUCCESS;
}