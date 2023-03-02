/*
    Restrict object creation on Heap by deletig new operator for class
*/
#include <iostream>
using namespace std;

class User{
    int id;
    string name;

public:
    User(int userId, string userName) : id(userId), name(userName){}

    // delete the new operator to prevent the object creation on heap.
    void *operator new(size_t) = delete;

    void display(){
        cout << "id -> " << id << endl << "name -> " << name << endl;
    }
};

int main(){
    User user1(101, "subodh");
    user1.display(); // id -> 101, name -> subodh

    // this line throw error, because new operator is deleted so
    // object can't be created inside heap memory
    User user2 = new User(102, "Anup");
    return 0;
}