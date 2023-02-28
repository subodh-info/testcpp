#include <iostream>
using namespace std;
class Base{};
class Derived: private Base{};
int main(){
    Derived d1;
    Base *b1 = &d1; // not allowed (in case of private or protected inheritance this is line invalid)
    Base *b2 = (Base*)(&d1); // allowed
    Base *b2 = static_cast<Base*>(&d1);// this line also show error, because, if you inherit as protected. So to use static_cast, inherit it as public.
    return 0;
}