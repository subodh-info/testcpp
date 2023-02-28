/*
    putchar() -> this method is used to write the character which are provied as parameter to standard output stream.

    int putchar(char ch);
    As parameter it accepts unsigned character. 
    this method EOF if any error occure.

    getchar() -> this method is used to read the single character from standard input stream and it returns integer value.
    If any error occure then this method return EOF.
    int getchar();

    getc() -> This is also c standard library function It is used to read the single character from any input stream.

    putc() -> This is also c standard library function. It is used to write a single character to any output stream. 
*/
#include <stdio.h>

void main(){
    // char ch = 'A';
    // printf("%d\n", putchar(ch));
    // char ch = 'A';
    // for(ch = 'A'; ch <= 'Z'; ++ch)
    //     putchar(ch);
    char ch;
    printf("Enter any character : \n");
    ch = getchar();
    if(ch != EOF)
        putchar(ch);
    else
        puts("Error !");
}