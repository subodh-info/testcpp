#include <iostream>
using namespace std;

size_t reverseNumber(int num){
    static size_t result = 0;
    if(num == 0)
        return 0;
    else{
        result =  (result * 10 + num %10);
        reverseNumber(num/10);
    }
    return result;
}

// void rever(int num){
//     int result = 0;
//     while(num != 0){
//         result = result * 10 + num %10;
//         num = num /10;
//     }
//     cout << "result :" << result << endl;
// }

int main(){
    cout << "Result : " << reverseNumber(34615) << endl;
    return 0;
}