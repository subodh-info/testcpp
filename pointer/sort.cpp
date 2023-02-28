#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int compare(const string &s1, const string &s2){
    return s1.length() > s2.length();
}

int main(){
    string friends[] = {"subodh", "rahul", "priyanka", "swapnil", "akshay", "suraj"};

    cout << "friend's name before sorting => " << endl;
    for(string nm : friends){
        cout << nm << endl;
    }
    cout << "\nfriend's name after sorting ==> " << endl;
    int (*ptr)(const string &, const string &);
    ptr = compare;

    sort(friends, friends + 6, ptr);
    for(string x : friends){
        cout << x << endl;
    }
    return 0;
}