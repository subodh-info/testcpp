#include <iostream>

using namespace std;

class Greet{
    public:
    void operator()(){
        cout << "Hello world !" << endl;
    }
};

int main(){
    Greet greet;
    greet(); // Hello world
    greet.operator()(); // Hello world
    return 0;
}