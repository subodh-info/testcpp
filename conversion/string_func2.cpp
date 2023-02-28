#include <iostream>
#include <string>

using namespace std;

int main(){
    string str1 = "geeksforgeeks is for geeks";
    string str2 = "geeksforgeeks rocks";
    char ch[80]; // declaring character array 
    str1.copy(ch, 13, 0); // here, copy method is used to copy the characters from string. 13 = indicates number of character to be copied. 0 = indicates the index from where the character to be copied. 
    cout << "The new copied character array is: ";
    cout << ch << endl;
    
    // display strings before swapping
    cout << "The 1st string before swapping is : ";
    cout << str1 << endl;
    cout << "The 2nd string before swapping is : ";
    cout << str2 << endl;

    str1.swap(str2); //using swap() to swap content
    cout << "The 1st string after swapping is : " << str1 << endl;
    cout << "The 2nd string after swappig is : " << str2 << endl;

    return 0;
}