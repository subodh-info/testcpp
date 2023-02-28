#include <iostream>
using namespace std;

int main(){
    int row = 5, count = 0;
    for(int i = 1; i <= row; ++i){
        count = i;
        for(int space = 1; space <=row-i; ++space){
            cout << "  ";
        }
        int k = 1;
        while(k <= i){
            cout << count << " ";
            count++;
            k++;
        }
        count = count - 2;
        for(int z = 1; z < i; ++z){
            cout << count << " ";
            count--;
        }
        cout << endl;
    }
    return 0;
}