#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
    string name, city;
    virtual void setData(string name, string city){
        this->name = name;
        this->city = city;
    }

    virtual void display(){
        cout << "\nName => " << this->name << "\nCity => " << this->city;
    }
};

class Student: public Person{
    public:
    string course;
    void setData(string name, string city, string course){
        this->name = name;
        this->city = city;
        this->course = course;
    }

    void display(){ // method overriding
        cout << "\nName : " << this->name << "\nCity: " << this->city << "\nCourse: " << this->course;
    }
};

int main(){
    Student student;
    student.setData("Subodh","Gaya","compuer science");

    Person *person = &student;
    person->display(); // here, student class's display() is invoked.

    Person per;
    person = &per;
    person->setData("Rahul","Gaya");
    person->display(); // here, Person class's display() is invoked.
    return 0;
}