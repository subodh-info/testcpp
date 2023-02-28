#include <iostream>
using namespace std;

int main(){
    int *ptr = (int*)malloc(sizeof(int));
    int a = 400;
    ptr = &a;
    free(ptr);
    return 0;
}