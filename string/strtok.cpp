#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char str[100];
    cout << "Enter string => " << endl;
    cin.getline(str, 100);
    char *token = strtok(str, "-");
    cout << "Split string using strtok() function" << endl;
    while(token != NULL){
        cout << token << endl;
        token = strtok(NULL, "-");
    }
    return 0;
}