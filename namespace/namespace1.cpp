#include <iostream>

using namespace std;

namespace first_space{
    int num = 10;
    void func(){
        cout << "Inside first space" << endl;
    }

    namespace second_space{ // nested namespace
        void func(){
            cout << "Inside second space" << endl;
            cout << "Value of num : " << num << endl;
        }
    }
}

using namespace first_space::second_space;
int main(){
    func(); //this function calls from second namespace.
    return 0;
}