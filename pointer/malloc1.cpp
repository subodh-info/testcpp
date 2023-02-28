#include <iostream>

using namespace std;

int main(){
    int *ptr;
    ptr = (int*)malloc(sizeof(int));
    if(ptr != NULL){
        cout << "Memory is allocated" << endl;
    }
    else{
        cout << "Memory is not allocated" << endl;
    }
    return 0;
}