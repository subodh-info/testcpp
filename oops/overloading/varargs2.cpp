#include <iostream>
#include <stdarg.h>
using namespace std;

int add(int a, int b){
    return a + b;
}


int add(int a, int b, int c){
    return a + b;
}

int add(int arg_count, ...){
    va_list vlist;
    va_start(vlist, arg_count);
    int sum = 0;
    for(int i = 0; i < arg_count; ++i){
        sum += va_arg(vlist, int);
    }
    return sum;
}

int main(){
    cout << "sum => " << add(1, 1) << endl; //=> here, ambiguity problem is not occure. Because, with compare to variable length argument method has less precedence than ordinary function. therefore, in this case always, first method - add(int, int) is invoked. 
    cout << "sum => " << add(2, 2, 3) << endl;
	cout << "sum => " << add(6, 2, 3,4, 5) << endl;
    return 0;
}