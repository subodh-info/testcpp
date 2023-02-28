#include <iostream>
using namespace std;

int add(int a, int b = 9){
    return a + b;
}

int add(int a){
    return a;
}

int main(){
    cout << "Addition => " << add(12) << endl; //=>Here, we will get ambiguity problem. Because, In this situation there are two method are available for calling. so, compiler confused which method is calling here. therefore, It throws ambiguity problems. 
    return 0;
}