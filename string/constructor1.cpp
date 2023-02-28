#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string s1 = "welcome"; // object s1 is created with content "welcome";
    string s2(s1, 2, 3);// 2 is index and 3 is no. of character
    cout << "s2 => " << s2 << endl;

    char ch[] = "hello";
    string s3(ch); 
    cout << "s3 => " << s3 << endl;

    string s4(3, 'a');
    cout << "s4 => " << s4 << endl;

    string s5(ch, 3);
    cout << "s5 => " << s5 << endl;

    
    return 0;
}