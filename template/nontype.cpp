#include <iostream>

using namespace std;

template<class T, int size>
class A{
    T arr[size];

    public:
    void insert(){
        for(int i = 0; i < size; ++i){
            arr[i] = i + 1;
        }
    }

    void display(){
        for(int i = 0; i < size; ++i){
            cout << arr[i] << " ";
        }
    }
};

int main(){
    A<int, 10> t;
    t.insert();
    t.display();
    return 0;
}