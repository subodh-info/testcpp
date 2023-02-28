#include <iostream>
#include <string>

using namespace std;

int main(){
    char a[]{'c','o','d','e'};
    char b[]{"geeksforgeeks"};

    string s_a(a);
    string s_b(b);

    // we cannot use this technique again to store something in s_a
    // ans s_b because we use constructors
    // which are only called
    // when the string is declared

    // therefore, if we remove the comment from following line 
    // of code then we will get error.
/*
    char demo[]{"geek"};
    s_a(demo);
*/
    cout << s_a << endl << s_b << endl;
    return 0;
}