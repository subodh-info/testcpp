/*
isupper() -> It is c library function that is used to check input character is in uppercase or not. It is avaliable from <ctype.h> header file. 
It takes an argument of integer type. this function internally converts into character and then check input value is in uppercase or not. 
If input value is in uppercase then it return non-zero(true) value otherwise it returns zero(false).

int isupper(int args);

*/
#include <stdio.h>
#include <ctype.h>

void main(){
    int ch;
    printf("Enter any character to check uppercase :");
    ch = getchar();
    if(!isupper(ch))
        printf("%c is not in uppercase",ch);
    else
        printf("%c is in uppercase",ch);
}