#ifdef ADDRESS_H
#define ADDRESS_H
#endif

#include <string>

class Address{
    std::string city;
    std::string state;
    std::string pincode;

    public:
    Address(std::string city, std::string state, std::string pincode);
    void showAddress();
};