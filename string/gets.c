/*
    gets() -> this function is used to take input from input stream and stored value into specified character pointer.
    get(char *str);

    puts() -> this function is used to write the string to standard output stream but not including null character. A newline character is appended to the output stream by this function. 
*/
#include <stdio.h>

void main(){
    char name[50];
    printf("Enter your name : \n");
    gets(name);
    // printf("Your name : %s\n", name);
    puts(name);
}