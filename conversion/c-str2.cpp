#include <iostream>
#include <cstring>

using namespace std;

int main(){
    //assign value to char array
    string str = "geeksforgeeks";

    /* the c_str() function returns
    a const poitner to null terminated contents.
    */
   const char *s = str.c_str();

   cout << s << endl;

    return 0;
}