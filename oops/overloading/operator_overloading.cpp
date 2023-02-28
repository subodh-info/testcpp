#include <iostream>
using namespace std;

class Test{
    private:
    int num;

    public:
    Test():num(8){}

    void operator ++(){
        num = num + 2;
    }

    void print(){
        cout << "The count is: " << num;
    }
};

int main(){
    Test tt;
    ++tt; //=> here, calling of a function "void opertor ++()"
    tt.print();
    return 0;
}