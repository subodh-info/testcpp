#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool newPredicate(int m, int n){
    return (m == n);
}

int main(){
    int newints[] = {20, 40, 60, 80, 100};
    vector<int> newVector(newints, newints + 5);
    if(equal(newVector.begin(), newVector.end(), newints))
        cout << "Both container have the same elements" << endl;
    else
        cout << "Both container have different element" << endl;
    
    newVector[3] = 18;
    if(equal(newVector.begin(), newVector.end(), newints))
        cout << "Both container have the same elements" << endl;
    else
        cout << "Both container have different element" << endl;
    
    return 0;
}