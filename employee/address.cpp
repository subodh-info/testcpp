#include "address.hpp"
#include <iostream>
#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
Address :: Address(std::string city, std::string state, std::string pincode){
    this->state = state;
    this->city = city;
    this->pincode = pincode;
}

EMSCRIPTEN_KEEPALIVE
void Address :: showAddress(){
    std::cout << std::endl << "City: " << this->city << " ; State : " << this->state << " ; Pincode : " << this->pincode << std::endl;
}