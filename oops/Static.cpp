#include <iostream>

class Demo{
    public:
    std::string name;
    static Demo(std::string name){
        this->name = name;
    }
};