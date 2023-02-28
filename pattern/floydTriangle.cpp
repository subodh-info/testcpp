#include <iostream>
using namespace std;

int main(){
    int count = 0;
    for(int row = 1; row <= 4; ++row){
        for(int col = 1; col <= row; ++col){
            count++;
            cout << count << " ";
        }
        cout << endl;
    }
    return 0;
}