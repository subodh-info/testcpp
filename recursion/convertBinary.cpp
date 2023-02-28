#include <iostream>
using namespace std;
int red = 0, result = 0;
int convertBinary(int num){
    if(num == 0){
        return 0;
    }else{
        // red = num % 2;
        // result = result * 10 + red;
        // convertBinary(num/2);
        return (num % 2 + 10 * convertBinary(num/2));
    }
}

int main(){
    cout << "result : " << convertBinary(10) << endl;
    return 0;
}

/*
1. 10 % 2 + 10 * convertBinary(10/2); => 0 + 10 * 101 => 1010
2.               5 % 2 + 10 * convertBinary(5/2) => 1 + 10 * 10 => 101
3.                              2 % 2 + 10 * convertBinary(2/2) => 0 + 10 * 1 ==> 10
4.                                             1 % 2 + 10 * convertBinary(0) => 1
                                                                                        
*/