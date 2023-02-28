#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int lb = 200, ub = 500;
    for(int i =0; i < 5; ++i){
        cout << (rand() % (ub - lb + 1)) + lb << " ";
    }
    return 0;
}
