#include <iostream>
using namespace std;

class Test{
public:
    Test(){ // constructor
        cout << "Object creation by constructr" << endl;
    }

    ~Test(){
        cout << "calling destructor" << endl;
    }
};

int main(){
    Test test;
    return 0;
}