#include <iostream>
using namespace std;

int main(){
    int *ptr = NULL;
    if(ptr != NULL){
        printf("value of ptr %d", *ptr);
    }
    else{
        printf("Invalid pointer");
    }

    return 0;
}