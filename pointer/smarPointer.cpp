#include <iostream>
using namespace std;

class SmartPtr{ // create a class to implement smart pointer
    int *ptr;

    public:
    explicit SmartPtr(int *p = NULL){
        ptr = p;
    }

    ~SmartPtr(){ // destructor to deallocate the resource used
        delete ptr;
    }

    int &operator*(){
        return *ptr;
    }
};

int main(){
    SmartPtr ptr(new int());
    *ptr = 100;
    cout << *ptr << endl;
    return 0;
}