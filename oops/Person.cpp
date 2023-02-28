#include <iostream>
using namespace std;

class Person{
    string name;
    string city;
    Person(){
        cout << "Constructor of A" << endl;
    }

    friend class Human;
};

class Human{
    public:
    Human(){
        Person person;
        cout << "Constructor of B" << endl;
    }
};

int main(){
    Human human;
    return EXIT_SUCCESS;
}