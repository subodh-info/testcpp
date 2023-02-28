#include <iostream>
using namespace std;

class Calculation{
    public:
    int add(int a, float b){
        return a + b;
    }

    float add(float a, int b){
        return a + b;
    }
};

int main(){
    Calculation calculation;
    cout << "Addition => " << calculation.add(12, 11) << endl; //=> Here, compiler throws ambiguity problems, because, add(int, int) invoke but not such type of methods are declared so, it is type casted then there are two methods are available for invoking. so, compiler confused to call method then it throws ambiguity problems. 
    return 0;
}