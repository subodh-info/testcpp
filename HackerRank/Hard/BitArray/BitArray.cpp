#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    uint64_t N,S,P,Q;
    cin >> N >> S >> P >> Q;
    uint64_t var = (uint64_t)pow(2,31);
    uint64_t a = S % var;
    int distinct_no = 0;
    uint64_t b = -1;
    for(uint64_t i = 1; i < N; ++i){        
        b = (a * P + Q) % var;
        if(b != a){
            a = b;
            distinct_no++;
        }
    } 
    cout << distinct_no+1;

    return 0;
}