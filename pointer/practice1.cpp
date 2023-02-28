#include <iostream>

using namespace std;

int main(){
    int num = 5;
    int *ptr = &num;
    cout << "num : " << num << endl;
    cout << "ptr : " << *ptr << endl;
    cout << "*ptr : " << ptr << endl;
    (*ptr)++;
    cout << "num : " << num << endl;
    cout << "*ptr : " << ptr << endl;

    return 0;
}