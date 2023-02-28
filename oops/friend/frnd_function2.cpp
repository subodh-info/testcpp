#include <iostream>
#include <string>
using namespace std;

class Parent{
    protected:
    string name = "Subodh";

    public:
    friend string getName(Parent); 
};

string getName(Parent parent){
    return parent.name;
}

int main(){
    Parent parent;
    cout << "Your name: " << getName(parent) << endl;
    return 0;
}