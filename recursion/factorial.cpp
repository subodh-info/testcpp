#include <iostream>
using namespace std;

long factorial(size_t num){
    if((num == 1) || (num == 0)){
        return 1;
    } else{
        return num * factorial(num - 1);
    }
}

int main(){
    cout << "factorial : " << factorial(8) << endl;
    return 0;
}