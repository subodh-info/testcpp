#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
    string name, city;

    void display(){
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
    student.setData("subodh", "Gaya","Information Technology");
    //student.display();

    Person *person = &student;
    person->display();
    
    return 0;
}