#include <iostream>
using namespace std;
int result = 0;
int findLargest(int arr[], int start, int end){
    if(start >= end)
        return result;
    else{
        result = (arr[start] > arr[start+1]) ? arr[start] : arr[start+1];
        findLargest(arr, start+1, end);
    }
    return result;
}

int main(){
    int arr[]{12, 4, 7, 21, 34, 67};
    cout << "largest : " << findLargest(arr, 0, 6) << endl;
    return 0;
}