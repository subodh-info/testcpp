/*
isdigit() -> It is c library function available in <ctype.h> header file. It is used to check input character is digit or not. If input character is digit then it return non-zero value otherwise it returns 0.
    int isdigit(char ch);
*/
#include <stdio.h>
#include <ctype.h>

void main(){
    char ch;
    printf("enter any character : ");
    ch = getchar();
    if(!isdigit(ch))
        printf("%c is not a digit\n",ch);
    else    
        printf("%c is a digit\n",ch);
}