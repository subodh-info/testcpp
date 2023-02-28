#include <iostream>
using namespace std;
class Student{
    private:
    int roll;

    public:
    //constructor
    Student(int r):roll(r){}

    // A const function that changes roll with the help of const_cast
    void fun() const{
        (const_cast <Student*>(this))->roll = 5;
    }

    int getRoll(){ return roll; }
};

int main(){
    Student s(3);
    cout << "Old roll number: " << s.getRoll() << endl;
    s.fun();
    cout << "New roll number: " << s.getRoll() << endl;
    return 0;
}