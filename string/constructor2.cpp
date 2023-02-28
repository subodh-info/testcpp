#include <iostream>
#include <string>

using namespace std;

int main(){
    string cindy("cindy has inner beauty");
    
    string ex(cindy); 
    cout << ex << endl; // cindy has inner beauty

    string ex2(cindy, 6);
    cout << ex2 << endl; // has inner beauty

    string ex3(cindy, 6, 3); 
    cout << ex3 << endl; // has

    string ex4(cindy, 6, 1000); 
    cout << ex4 << endl; // has inner beauty
    
    return 0;
}