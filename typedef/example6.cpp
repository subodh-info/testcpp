#include <iostream>
#define PTR char
typedef char* ptr;

int main(){
    ptr x, y, z;
    PTR p, q, r;
    std::cout << "x : " << sizeof(x) << std::endl;
    std::cout << "y : " << sizeof(y) << std::endl;
    std::cout << "z : " << sizeof(z) << std::endl;
    std::cout << "p : " << sizeof(p) << std::endl;
    std::cout << "q : " << sizeof(q) << std::endl;
    std::cout << "r : " << sizeof(r) << std::endl;
    return 0;
}