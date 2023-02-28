#include <iostream>

using namespace std;

void fun(int arr[], int arr_size){
    
    for(int i = 0 ; i < arr_size; ++i){
        arr[i] = i;
        
    }
}

int main(){
    int i;
    int arr[] = {0,0,0,0};
    size_t n = (&arr)[1] - arr;
    
    fun(arr, n);
    
    printf("\nthe size of the array is : %ld", n);
    printf("\nPrintf elements are : ");
    for(int i =0; i < n; ++i){
        printf("%d ", arr[i]);
    }
    return 0;
}