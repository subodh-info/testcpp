#include <iostream>
using namespace std;

class Sample{
    public:
    Sample(){
        static int x; 
        x = 12;
        cout << "value of x : " << x << endl;
        ++x;
    }
};

int main(){
    Sample s1, s2, s3;// here, each time we get output as "12 12 12". Because, x is treated as normal variable. 
    return 0;
}