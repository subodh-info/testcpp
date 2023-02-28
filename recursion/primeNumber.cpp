#include <iostream>
using namespace std;

bool isPrime(int num, int index = 2){
    if(num < 2){
        return false;
    }
    if(num == 2)
        return true;
    if(num % index == 0)
        return false;
    if(index * index > num)
        return true;
    
    return isPrime(num, index+1);
}

int main(){
    if(isPrime(13))
        cout << "Prime number !" << endl;
    else    
        cout << "Not Prime number !" << endl;
    return 0;
}