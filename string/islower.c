/*
    islower() -> this is c standard library function available from <ctype.h> header file. it takes an integer as argument. Internally this function converts input int into character and then check it is in lowercase of not. If input argument is not in lowercase then it return zero(false). else it returns non-zero(true) value.
    
    islower(int arg);
*/
#include <stdio.h>
#include <ctype.h>

void main(){
    int ch;
    printf("Enter any character ; ");
    ch = getchar();
    if(!islower(ch))
        printf("%c is not in lowercase",ch);
    else
        printf("%c is in lowercase",ch);
}