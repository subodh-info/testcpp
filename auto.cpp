#include <iostream>
using namespace std;

auto showMessage(string str){
    return "Hello ! " +str;
}

int main(){
    auto num = 4;
    auto f = 3.45f;
    auto ch = 'a';
    auto d = 3.54;
    auto ptr = &num;

    auto greet = showMessage("subodh");
    cout << greet << endl;
    cout << "num --> " << typeid(num).name() << endl;
    cout << "f --> " << typeid(f).name() << endl;
    cout << "ch --> " << typeid(ch).name() << endl;
    cout << "d --> " << typeid(d).name() << endl;
    cout << "ptr --> " << typeid(ptr).name() << endl;
    cout << "greet --> " << typeid(greet).name() << endl;
    
    return 0;
}