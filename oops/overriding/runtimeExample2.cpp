#include <iostream>
using namespace std;

class Person{
    public:
    virtual void display(){
        cout << "virtual display method" << endl;
    }
    void display(){
        cout << "non-virtual method" << endl;
    }
};

int main(){
    Person *person;
    person->display();
    return 0;
}