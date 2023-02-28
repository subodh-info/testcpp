#include <iostream>
#include <string>

using namespace std;

int main(){
    string str = "geeksforgeeks";
    string::iterator it; // declare an iterator
    string::reverse_iterator rit; // declare reverse iterator.
    cout << "string => " << str << endl;

    cout << "\nthe string using forward iterator is : ";
    for(it = str.begin(); it != str.end(); ++it){
        if(it == str.begin()) *it = 'G';
        cout << *it;
    }
    cout << endl;

    str = "geeksforgeeks";
    cout << "\nThe reverse string using reverse iterator is : ";
    for(rit = str.rbegin(); rit != str.rend(); ++rit){
        if(rit == str.rbegin()) *rit = 'S';
        cout << *rit;
    }
    cout << endl;

    str = "geeksforgeeks";
    cout << "\nThe string using constant itertor is : ";
    for(auto itr = str.cbegin(); itr != str.cend(); ++itr){
        //if(itr == cbegin()) *itr == 'G';
        // if we uncomment above line then we will get compile time error. because, here, itr is constant or read-only.
        // therefore, we cannot perform any operation on this pointer. But, we can increase/decrease this pointer. 
        cout << *itr; 
    }
    cout << endl;

    return 0;
}

/*
    crbegin() and crend() is the combination of cbegin() + rbegin() and cend() + rend() respectively. 
*/