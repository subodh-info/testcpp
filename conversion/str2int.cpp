#include <iostream>
#include <sstream> // for stringstream class
using namespace std;

int main(){
    string str = "abc62345";
    
    // create object of stringstream object
    // and initialized with existing string object
    stringstream geeks(str); 

    int num = 0; 
    geeks >> num; // convert string to int value 
    cout << "num => " << num;
    return 0;
}