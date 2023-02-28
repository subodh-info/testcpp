#include <iostream>
using namespace std;

class Address{
    public:
    string city, state, country;
    Address(string city, string state, string country){
        this->city = city;
        this->state = state;
        this->country = country;
    }
};

class Employee{
    private:
    int id;
    string name;
    Address *address; // Employee HAS-A address. (its shows HAS-A relationship)

    public:
    Employee(int id, string name, Address *address){
        this->id = id;
        this->name = name;
        this->address = address;
    }

    void display(){
        cout << "\nId => " << this->id << "\nName => " << this->name << "\nCity => " << address->city << "\nState => " << address->state <<"\nCountry =>" << address->country;
    }
};

class Student{
    private:
    int roll;
    string name;
    Address *address; // HAS-A relationship

    public:
    Student(int roll, string name, Address *address){
        this->roll = roll;
        this->name = name;
        this->address = address;
    }

    void display(){
        cout << "\nRoll : " << this->roll << "\nName : " << this->name << "\nCity => " << address->city << "\nState => " << address->state << "\nCountry => " << address->country;
    }
};

int main(){
    Address address("Gaya", "Bihar","India");
    Employee employee(101, "Subodh", &address);
    employee.display();

    Address add("Ranchi", "Jharkhand", "India");
    Student student (1, "Rahul", &add);
    student.display(); 

    return 0;
}