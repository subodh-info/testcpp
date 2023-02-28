#include <iostream>
using namespace std;
/* First way */
// void reverseString(string str, int start, int end){
//     if(start >= end){
//         return;
//     }else{
//         reverseString(str, start+1, end);
//         cout << str[start];
//     }
// }

/* Second way*/
void reverseString(string str){
    if(str.length()==0){
        return;
    }else{
        reverseString(str.substr(1));
        cout << str[0];
    }
}


int main(){
    string str = "welcome";
    cout << "original string : " << str << endl;
    cout << "reverse string : "; 
    //reverseString(str, 0, str.length());
    reverseString(str);
    return 0;
}