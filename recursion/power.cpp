#include <iostream>
using namespace std;

size_t calculatPower(size_t base, size_t power){
    if(power == 0){
        return 1;
    }else if(power == 1){
        return base;
    }else{
        return base * calculatPower(base, power-1);
    }
}

int main(){
    cout << "result : " << calculatPower(25,2) << endl;
    return 0;
}