#include <iostream>

using namespace std;

void func1(){
    cout << "func1 is called" << endl;
}

void func2(void(*ptr)()){ // here, function pointer is declared 
    ptr(); 
}

int main(){
    func2(func1);
    return 0;
}