#include <iostream>
using namespace std;

class Sample{
    static int a;
    static int b;

    public:
    static void printValues(){
        a++;
        ++b;
        cout << "value of a : " << a << endl;
        cout << "value of b : " << b << endl;
    }
};
int Sample :: a = 12;
int Sample :: b = 11;
int main(){
    Sample sample;
    sample.printValues(); // method is called through class's object.

    Sample::printValues();// method is called through class's name.

    return 0;    
}