#include <iostream>
using namespace std;

class Human{
    public:
    string name;
    string city;

    void display(){
        cout << "Name :  "<< this->name << endl << "City : " << this->city << endl;
    }
};

class Person{
    public:
    string country;
    string state;

    void display(){
        cout << "State : " << this->state << endl << "Country: " << this->country << endl;
    }
};

class Employee : public Human, public Person{ // multiple inheritance
    public:
    void setData(string name, string city, string state, string country){
        this->name = name;
        this->city = city;
        this->state = state;
        this->country = country;
    }
};

int main(){
    Employee employee;
    employee.setData("subodh", "Gaya", "Bihar", "India");
    //employee.display(); // Here, ambiguity problem is arised. Because, display() is inherited from Human class as well as Person class. 
    
    employee.Human::display();
    employee.Person::display();

    return 0;
}