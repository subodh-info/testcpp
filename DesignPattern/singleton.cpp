#include <iostream>
using namespace std;

class Singleton{
    
    Singleton(){}

    public:
    static Singleton *instance;
    static Singleton* getInstance(){
        if(!instance){
            instance = new Singleton;
        }
        return instance;
    }
};

Singleton *Singleton::instance = NULL;

int main(){
    Singleton *s1 = Singleton::getInstance();
    Singleton *s2 = Singleton::getInstance();

    if(s1 == s2){
        cout << "s1 => " << s1 << endl << "s2 => " << s2 << endl;
        cout << "Both are equals" << endl;
    }
    else{
        cout << endl << "Both are not equal" << endl;
    }
    return 0;
}