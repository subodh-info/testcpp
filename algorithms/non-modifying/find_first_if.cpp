#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool case_insensitive(char a1, char a2){
    return (tolower(a1) == tolower(a2));
}

int main(){
    int newChars[] = {'a', 'b', 'c', 'A', 'B', 'C'};
    vector<char> haystack(newChars, newChars + 6);
    vector<char>::iterator ti;
    int patt[] = {'A','B','C'};
    ti = find_first_of(haystack.begin(), haystack.end(), patt, patt+3); // here, case-sensitive match.
    if(ti != haystack.end()){
        cout << "Match 1 is : " << *ti << endl; 
    }

    ti = find_first_of(haystack.begin(), haystack.end(), patt, patt+3, case_insensitive);
    if(ti != haystack.end())
        cout << "Match 1 is : " << *ti << endl;
    
    return 0;
}