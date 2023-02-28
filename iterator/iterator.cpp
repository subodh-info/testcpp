#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v{1, 2, 3, 4, 5};
    vector<int>::iterator itr;

    for(int i = 0; i < 5; ++i){ // Traversal without using an iterator
        cout << v[i] << " ";
    }
    cout << endl;

    for(itr = v.begin(); itr != v.end(); ++itr){ // Traversal by using iterator
        cout << *itr << " ";
    }
    cout << endl;

    v.push_back(10);

    for(int i = 0; i < 6; ++i){ // Traversal without using an iterator
        cout << v[i] << " ";
    }
    cout << endl;

    for(itr = v.begin(); itr != v.end(); ++itr){ // Traversal by using iterator
        cout << *itr << " ";
    }
    cout << endl;
    
    return 0;
}