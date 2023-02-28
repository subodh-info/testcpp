#include <iostream>
using namespace std;

int main(){
    char ch ='A';
    for(int i =0; i <5; ++i){
        cout << endl;
        for(int j = 0; j <= i; ++j){
            cout << (char)(ch + j) << " ";
        }
    }
    return 0;
}