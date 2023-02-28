#include <iostream>

using namespace std;

static int value = 0;

int print(){
    // cout << "I am empty function and I am called at last\n" << endl;
    return 1;
}
template<typename T, typename... Types>
int print(T var1, Types... var2){
    return 2 * 2;
}

template<typename... types>
int show(types... digits){

    return print(digits...);
}
int main(){
    // cout << "value => " << print(1, 2, 3.14, "Pass me any", "number of arguments", "I will print\n");
    cout << "result -> " << show(1, 2, 3) << endl;
    return 0;
}