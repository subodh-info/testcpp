#include <iostream>
#include <stdarg.h>
using namespace std;

int sum(int argc_count, ...){
    int sum = 0;
    va_list vlist; // va_list is a type to hold the information about variable argument.

    va_start(vlist, argc_count); // It must be called before accessing the variable length of argumets. it is available in <stdarg.h> header file.

    // calculat the sum of arguments
    for(int i = 0; i < argc_count; ++i){
        sum = sum + va_arg(vlist, int); // va_arg is a macro that is used to access the value from variable length argument. It takes two argument. first argument variable which holds the information about variable length arguments and second which indicates the type of argument.
    }
    va_end(vlist); // it is executed before, the returns the function
    return sum;
}

int main(){
    // cout << "sum => " << sum(3, 1, 2, 3) << endl; // ==> 6
    cout << "sum => " << sum(7, 1, 2, 3, 4, 5, 6) << endl; // ==> 21
    return 0;
}