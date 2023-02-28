#include <iostream>

using namespace std;

void swap(int &p, int &q){
    int temp = p;
    p = q;
    q = temp;
}

int main(){
    int a = 9;
    int b = 10;
    swap(a ,b);
    cout << "value of a : " << a << endl;
    cout << "value of b : " << b << endl;
    return 0;
}