#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v{1, 2, 3, 4, 5}; // vector declaration
    vector<int>::iterator itr;
    v.insert(v.begin()+1, 10);// here, at 1th index a new element is inserted that is 10.
    for(itr = v.begin(); itr != v.end(); ++itr){
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}