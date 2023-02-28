#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool newpredicate(int m, int n){
    return (m == n);
}

int main(){
    vector<int> haystack;
    for(int a = 1; a < 10; ++a)
        haystack.push_back(a*10);
    int patt1[] = {20, 30, 40, 50};
    vector<int>::iterator it; 
    it = search(haystack.begin(), haystack.end(), patt1, patt1 + 4);
    if(it != haystack.end()){
        cout << "Patt1 found at position: " << (it - haystack.begin()) << endl;
    }
    else{
        cout << "Patt1 not found" << endl;
    }

    int patt2[] = {40, 35, 50};
    it = search(haystack.begin(), haystack.end(), patt2, patt2 + 3);
    if(it != haystack.end()){
        cout << "Patt2 found at position: " << (it - haystack.begin()) << endl;
    }
    else{
        cout << "Patt2 not found " << endl;
    }

    return 0;
}