#include <iostream>

using namespace std;

void fun(double a){
    cout << "value of a is : " << a << endl;
}

void fun(int b){
    if(b % 2 == 0){
        cout << "Number is even" << endl;
    }
    else{
        cout << "Number is odd" << endl;
    }
}

int main(){
    fun(4.6);
    fun(6);
    return 0;
}