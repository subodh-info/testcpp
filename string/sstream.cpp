#include <iostream>
#include <sstream>

using namespace std;

int main(){
    stringstream ss;
    int num1 = 2019;
    double num2 = 3.14;
    
    // converting number to string
    ss << num1 << " " << num2; // here, numbers are converted into string and stored into stringstream object.
    cout << ss.str() << endl;

    // convert string to numer
    int n1;
    double d1;
    ss >> n1 >> d1; // here, string is converted into number.
    cout << "n1 : " << n1 << endl << "d1 :" << d1 << endl;
    return EXIT_SUCCESS;
}