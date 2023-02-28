#include <iostream>

using namespace std;

class Add{
    public:
    // overload function call operator
    // accept two integer arguments
    // return their sum
    int operator()(int a, int b){
        return a + b;
    }
};

int main(){
    Add add;
    int sum = add(100, 110);
    cout << endl << "Sum : " << sum;
    return 0;
}