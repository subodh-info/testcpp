#include <iostream>

using namespace std;

typedef int Length; // typedef provide the int data type to a new name as Length

int main(){
    Length num1, num2, num3;
    cout << "Enter the first number : " << endl;
    cin >> num1;
    cout << "Enter second number : " << endl;
    cin >> num2;
    cout << "Enter third number : " << endl;
    cin >> num3;
    cout << "Sum : " << num1 + num2 + num3 << endl;
    return 0;
}