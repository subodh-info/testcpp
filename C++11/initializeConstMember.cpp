#include <iostream>

using namespace std;

class Student{
public:
    const string college;

    // here, we get compile time error
    // because 'college' variable is constant
    // so, we cannot re-assign any value
    // Student(string college){
    //     this->college = college;
    // }
    // to overcome this problem, initializer list is used

    Student(string college): college{college}{}

    void print(){
        cout << "college name : " << this->college<< endl;
    }
};
int main(){
    Student std("Gaya college, gaya");
    std.print();
    return 0;
}