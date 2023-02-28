#include <iostream>
using namespace std;

int main(){
    for(int row = 1; row <= 6; ++row){
        for(int space = 1; space <= (6-row); ++space){
            cout << " ";
        }
        int value = 1;
        for(int col = 1; col <= row; ++col){          
            cout << value << " ";
            value = value * (row-col)/col;
        }
        cout << endl;
    }
    return 0;
}