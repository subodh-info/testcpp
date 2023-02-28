#include <iostream>
#include <string>

using namespace std;

int main(){
    int n = 12234;
    char str[1000];
    sprintf(str, "%d", n);
    printf("the string is : %s", str);
    return 0;
}