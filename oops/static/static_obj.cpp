#include <iostream>
using namespace std;

class Abc{
    int i;
    public:
    Abc(){
        i = 0;
        cout << "Constructor" << endl;
    }
    ~Abc(){
        cout << "Destructor" << endl;
    }
};

void createObject(){
    static Abc abc;
}

int main(){
    int x = 0;
    if(x == 0){
        createObject();
    }
    cout << "Program end " << endl;
    return 0;
}