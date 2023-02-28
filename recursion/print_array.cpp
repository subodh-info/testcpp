#include <iostream>
using namespace std;

void printArray(int arr[], int start, int end){
    if(start >= end){
        return;
    }
    cout << arr[start] << endl;
    printArray(arr, start+1, end);
}

int main(){
    int ar[] = {12, 1, 14, 21, 34, 43, 56, 67};
    printArray(ar, 0, 8);
    return 0;
}