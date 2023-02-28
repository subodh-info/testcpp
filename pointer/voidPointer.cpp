#include <iostream>

using namespace std;

int main(){
    int x = 4;
    float y = 5.5;
    void *ptr;
    ptr = &x; 
    cout << "integer value : " << *((int*)ptr) << endl;
    ptr = &y;
    cout << "float value : " << *((float*)ptr) << endl;
    return 0;
}