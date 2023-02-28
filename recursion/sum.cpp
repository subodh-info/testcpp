#include <iostream>
using namespace std;
int sumNatural(int n){
    if(n == 1)
        return 1;
    return n + sumNatural(n-1);
}

int main(){
    cout << "Sum : " << sumNatural(10) << endl;
    return EXIT_SUCCESS;
}