#include <iostream>
using namespace std;

bool status = true;

bool isPalindrom(string str, int start, int end){
    if(start >= end){
        return status;
    }else{
        if(str[start] != str[end]){
            status = false;
        }
        isPalindrom(str, start+1, end-1);
        return status;
    }
}

int main(){
    string str = "abbad";
    if(isPalindrom(str, 0, str.length()-1))
        cout << "palindrom string" << endl;
    else
        cout << "Not palindrom string " << endl;
    return 0;
}