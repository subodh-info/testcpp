#include <iostream>
using namespace std;

class Person{
public:
    Person(){
        cout << "Person object creation" << endl;
    }

    ~Person(){
        cout << "Person class's destructor invoked" << endl;
    }
};

class Student : public Person{
public:
    Student(){
        cout << "Studnet object creation" << endl;
    }

    ~Student(){
        cout << "Student class's destructor invoked" << endl;
    }
};

int main(){
    Student student;
    return 0;
}