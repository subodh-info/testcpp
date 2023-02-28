#include <iostream>

using namespace std;

class A{
    int arr[3];
public:
    // here, array is initialized
    // by uniform initialization features of C++
    A(int x, int y, int z): arr{x, y, z}{

    }

    void show(){
        for(int i = 0; i < 3; ++i){
            cout << arr[i] << endl;
        }
    }
};

int main(){
    A a(12, 11, 9);
    a.show();
    return 0;
}