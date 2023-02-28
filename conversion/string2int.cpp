#include <iostream>
using namespace std;

int string2Int(string &str){
    int num = 0;
    for(int i = 0; i < str.length(); ++i){
        num = num * 10 + (int(str[i] - 48));
    }
    return num;
}

int main(){
    string str = "123";
    int result = string2Int(str);
    cout << "Result : " << result << endl;
    return 0;
}