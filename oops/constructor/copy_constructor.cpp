#include <iostream>
using namespace std;

class Student{
    int rno;
    string name;
    double fee;

    public:
    Student(int rno, string name, double fee){
        this->rno = rno;
        this->name = name;
        this->fee = fee;
    }

    void display(){
        cout << "Roll no : " << this->rno << endl << "Name : " << this->name << endl << "Fee : " << this->fee << endl;
    }
};

int main(){
    Student s1(101, "subodh kumar", 45400);
    s1.display();

    Student s2(s1); // default copy constructor is called
    s2.display();

    Student s3 = s1; // default copy constructor is called
    s3.display();
}