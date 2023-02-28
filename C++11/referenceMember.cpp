#include <iostream>

using namespace std;

class Student{
    int &_roll; // reference variable
public:
    // here, if we do not use initializer list 
    // then we will get error
    // because, reference variable cannot be 
    // re-assign 
    // so, to resolve this problem
    // we can use initializer list feature
    Student(int roll): _roll{roll} {}

    void print(){
        cout << "Roll number : " << this->_roll << endl;
    }
};
int main(){
    Student std(101);
    std.print();
    return 0;
}