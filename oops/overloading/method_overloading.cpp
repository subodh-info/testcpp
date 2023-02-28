#include <iostream>
using namespace std;

class Cal{
    public:
    static int add(int a, int b){
        return a + b;
    }

    static int add(int a, int b, int c){
        return a + b + c;
    }
};

int main(){
    Cal c;
    cout << c.add(12, 14) << endl;
    cout << c.add(16, 19, 21) << endl;
    return 0;
}