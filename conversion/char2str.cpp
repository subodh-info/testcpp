#include <iostream>
#include <string>

using namespace std;

string getString(char *a, int size){
    string s;
    for(int i = 0; i < size; ++i){
        s = s + a[i];
    }
    return s;
}

int main(){
    char a[] {'c', 'o', 'd','e'};
    char b[] {"geeksforgeeks"};

    int a_size = sizeof(a)/sizeof(char);
    int b_size = sizeof(b)/sizeof(char);

    string s_a = getString(a, a_size);
    string s_b = getString(b, b_size);

    cout << s_a << "\n" << s_b << endl;
    
    return 0;
}