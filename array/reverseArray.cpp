#include <iostream>

using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    int arrSize = sizeof(arr)/sizeof(arr[0]);
    int lastIndex = arrSize -1;
    int i =0;
    while(i<lastIndex){
        int temp = arr[i];
        arr[i] = arr[lastIndex];
        arr[lastIndex] = temp;
        i++;
        lastIndex--;
    }
    

    cout << "Reverse array  : " << endl;
    for(int i =0; i < arrSize; ++i){
        cout << arr[i] << " ";
    }

    return 0;
}