#include <iostream>
using namespace std;

int func(int a){
    return a;
}

int func(int &a){
    return a;
}

int main(){
    int x = 5;
    cout << func(x) << endl;//=> Here, compiler throws ambiguity problems because, it is confused which function is acutally invoked. Because, there are no symantic difference between both function.
    return 0;
}