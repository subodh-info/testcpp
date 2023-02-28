#include <iostream>

using namespace std;

void printName(char *name){
    cout << "Name : " << name << endl;
}
int main(){
    char name[20];
    
    void(*ptr)(char*);
    ptr = printName;
    cout << "Enter name : ";
    cin >> name;
    ptr(name);
    return 0;
}