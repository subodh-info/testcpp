#include <iostream>

using namespace std;

int main(){
    int x{10};
    char y{'M'};

    const int* i = &x;
    const int* j = &y
    cout << *i << " <=> " << *j;
    return 0;
}