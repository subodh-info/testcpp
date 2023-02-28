#include <iostream>
using namespace std;
void printTable(int n, int i){
    if(i > 10)
        return;
    else{
        cout << n << " * " << i << " = " << (n*i) << endl;
        printTable(n, i+1);
    }
}

int main(){
    printTable(81, 1);
    return 0;
}