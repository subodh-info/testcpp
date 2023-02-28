#include <iostream>
#include <string>

using namespace std;

class Person{
    string name;
    string city;

    public:
    void setData(string name, string city){
        this->name = name;
        this->city = city;
    }

    void display(){
        cout << "Name => " << this->name << endl << "City => " << this->city << endl;
    }
};

class Faculty{
    string department;

    public:
    void setData(string department){
        this->department = department;
    }

    void display(){
        cout << "Department => " << this->department << endl;
    }
};

class Student: public Person, public Faculty{
    public:
    void setData(string name, string city, string department){
       Person::setData(name, city);
       Faculty::setData(department);       
    }


    void display(){
        // resolution of ambiguity problem
        Person::display(); 
        Faculty::display();
    }

};

int main(){
    Student student;
    student.setData("Subodh", "Gaya", "Information Technology");
    student.display();//=> here, ambiguity problem
    return 0;
}