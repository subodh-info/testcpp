#include <iostream>
using namespace std;

template <class T>
class SmartPtr{
    T *ptr;

    public:
    explicit SmartPtr(T *p = NULL) {ptr = p;}

    //destructor
    ~SmartPtr(){
        delete ptr;
    }

    // overlading dereferncing operator
    T& operator*(){
        return *ptr;
    }

    // overload arrow operator so that members of T can be accessed 
    // like a pointer (useful if T represents a class or struct or union type)
    T* operator ->(){
        return *ptr;
    }
};

int main(){
    SmartPtr<int> ptr(new int());
    *ptr = 20;
    cout << *ptr << endl;
    return 0;
}