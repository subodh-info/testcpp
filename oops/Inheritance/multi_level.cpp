#include <iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout << "barking..." << endl;
    }
};

class BabyDog: public Dog{
    public:
    void weep(){
        cout << "weeping..." << endl;
    }
};

int main(){
    BabyDog d1;
    d1.eat();
    d1.bark();
    d1.weep();

    
    return 0;
}