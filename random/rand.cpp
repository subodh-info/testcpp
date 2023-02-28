#include <iostream>
#include <cstdlib>

using namespace std;

// class Main_Balwan {
// public:
//     Main_Balwan(Main_Balwan TuBalwan) {}; // here we will get compile time error. Because, in C++ copy constructor does not support pass by value. it supports only pass by reference. 
// };

// so, we can change this program in the following way.
/*

*/
class Main_Balwan{
    public:
    
    Main_Balwan(Main_Balwan &TuBalwan){};
};

int main(){
    for(int i = 0; i < 5; ++i){
        cout << rand() << " ";
    }
    return 0;
}