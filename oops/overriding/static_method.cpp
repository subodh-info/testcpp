#include <iostream>
using namespace std;

class Person{
    public:
    static void display(){
        cout << "this is from person class" << endl;
    }
};

class Student: public Person{
    public:
    static void display(){
        cout << "this is from student class" << endl;
    }
};

int main(){
    Person *person = new Student();
    person->display();
    return 0;
}