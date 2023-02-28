#include <iostream>
using namespace std;
int rightMostSetBit(int n){
    int position = 1;
    int m = 1; // to check the set bit

    while((n&m) == 0){
        m = m << 1;
        position++;
    }

    return position;
}

int main(){
    int num = 12;
    cout << "Number => " << num << endl;
    cout << "RightMost set bit position => " << rightMostSetBit(num) << endl;
    return 0;
}