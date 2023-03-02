/*
    this program demonstrate the deleting copy constructor and assignment operator
*/
#include <iostream>

using namespace std;

class User{
    int id;
    string name;
public:
    User(int userId, string userName) : id(userId), name(userName) {}

    // delete the constructor that accpets the Id as double type to prevent narrowing conversion.
    User(double userId, string userName) = delete;

    // deleting a constructor that accepts the id as char type to prevent invalid type conversion.
    User(char userId, string userName) = delete;


    // copy constructor is deleted
    User(const User &obj) = delete;

    // Assignment operator is deleted
    User& operator=(const User& obj) = delete;

    void display(){
        cout << "id -> " << id << endl << "Name -> " << name << endl;
    }
};

int main(){
    User userobj(3, "John");
    userobj.display(); // id -> 3 \n Name -> John

    // here, we will get error. 
    // If we don't want to create the clone of object then we can user
    // this approach.
    //User obj = userobj; // copy constructor is deleted, therefore this line show error.

    User obj1(5.5, "Riti"); // error, because related constructor is deleted (see line -> 15)
    obj1.display();
    User obj2('s', "Riti"); //// error, because related constructor is deleted (see line-> 19)
    obj2.display();
    return 0;
}