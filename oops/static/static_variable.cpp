#include <iostream>
using namespace std;

void counter(){
    int count = 0;
    cout << count++ << endl;
}

int main(){
    for(int i = 0; i < 5; i++){
        counter(); 
    }
    return 0;
}