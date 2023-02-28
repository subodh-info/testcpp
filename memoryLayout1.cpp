#include<stdio.h>

int main(int argc, char *argv[]) {
    int i;
  
    // first value in argv stores file name
    printf("File name = %s\n", argv[0]);
    printf("Number of arguments passed = %d\n", argc-1);
    for(i = 1; i < argc; i++) {
        printf("Value of Argument_%d = %s\n", i, argv[i]);
    }  
  
    return 0;
}
