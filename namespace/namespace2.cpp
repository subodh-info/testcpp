#include <iostream>
using namespace std;

namespace test{
    class Person{
        string name;

        public:
        void setName(string name){
            this->name = name;
        }
    };

    namespace nested{
        void show(){
            Person person;
            person.setName("Subodh");
            cout << "Name: " << person.name << endl; // due to private member we ca not access Private memeber.
        }
    }
}