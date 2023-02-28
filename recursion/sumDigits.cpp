#include <iostream>
using namespace std;
int sumDigits(int num){
    if(num == 0)
        return 0;
    return num % 10 + sumDigits(num/10);
}

int main(){
    cout << "sum : " << sumDigits(32101) << endl;
    return 0;
}