#include <iostream>
using namespace std;

void printEven(int start, int end){
    if(start > end){
        return;
    }else{
        if(start % 2 == 0){
            cout << start << endl;
        }
        printEven(start+1, end);
    }
}
int main(){
    printEven(90, 100);
    return 0;
}