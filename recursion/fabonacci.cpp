#include <iostream>
using namespace std;
size_t term1 = -1;
size_t term2 = 1;

void fabonacci(int target){
    size_t result = term1 + term2;
    if(target > 0){
        cout << result << " ";
        term1 = term2;
        term2 = result;
        fabonacci(target-1);
    }
}

int main(){
    fabonacci(9);
    return 0;
}
