#include <iostream>
using namespace std;

class Person{
public:
    Person(){
        cout << "Person class constructor" << endl;
    }
};

class Student: public Person{
public:
    Person(){ // here compiler treats it as a method and expects for return type. otherwise it generate compile-time error.
        cout << "Super class constructor in sub class" << endl;
    }
};
