#include <iostream>
#include <cmath>

using namespace std;

static int value = 0;
static int i = 0;
void print(){
    
}

template <typename T, typename... Args>
void print(T t, Args... args) {
    value = t * pow(2,i);
    i++;
    print(args...);
}

// template <typename T>
// void print(T t) {
    
// }

template <typename... Args>
int callPrint(Args... args) {
    print(args...);
    return value;
}

int main() {
    cout << "result -> " << callPrint(1,0,1) << endl;
    return 0;
}
