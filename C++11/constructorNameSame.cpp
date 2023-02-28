#include <iostream>

using namespace std;

class Student{
public:
    int roll;
    // Student(int roll){
    //     roll = roll;
    // }
    Student(int roll): roll{roll}{}

    void print(){
        cout << "Roll : " << roll << endl;
    }
};

int main(){
    Student std(12);
    std.print();
    return 0;
}