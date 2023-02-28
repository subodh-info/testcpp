#include <iostream>
using namespace std;

class Person{
    public:
    string name, city;
    virtual void display() = 0;
};

class Student: public Person{
    public:
    string course;

    void setData(string name, string city, string course){
        this->name = name;
        this->city = city;
        this->course = course;
    }

    void display(){
        cout << "\nName: " << this->name << "\nCity: " << this->city << "\ncourse: " << this->course;
    }
};

int main(){
    Student student;
    student.setData("Subodh","Gaya","Bachlor of science in Information Technology");

    Person *person;
    person = &student;
    person->display();

    return 0;
}