#include <iostream>

class Singleton{
    static Singleton *instance;
    Singleton(){}

    public:
    static Singleton* getInstance(){
        if(!instance)
            instance = new Singleton();
        return instance;
    }
};

Singleton *Singleton::instance = 0;
int main(){
    Singleton *s1 = Singleton::getInstance();
    Singleton *s2 = Singleton::getInstance();
    if(s1 == s1)
        std::cout << "Both are same" << std::endl;
    else    
        std::cout << "Both are not same" << std::endl;
    return EXIT_SUCCESS;
}