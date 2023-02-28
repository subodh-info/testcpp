#include <iostream>
using namespace std;

int countDigits(int num){
    if(num == 0){
        return 0;
    }
    return 1 + countDigits(num / 10);
}

int main(){
    cout << "total digits : " << countDigits(101) << endl;
    return 0;
}