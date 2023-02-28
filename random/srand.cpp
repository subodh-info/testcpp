#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    srand(2); // use current time as seed for random generator.

    for(int i = 0; i < 5; ++i){
        cout << rand() << " " ;
    }

    return 0;
}