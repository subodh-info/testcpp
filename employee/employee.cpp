#include "employee.hpp"
#include <iostream>
#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
Employee :: Employee(size_t empId, std::string empName, std::string qualification, int joinYear, std::string empEmail, Address *address){ 
    this->empId = empId;
    this->empName = empName;
    this->qualification = qualification;
    this->joinYear = joinYear;
    this->empEmail = empEmail;
    this->address = address;    
}

EMSCRIPTEN_KEEPALIVE
void Employee :: displayRecord(){
    cout << endl << "Id : " << this->empId;
    cout << endl << "Name : " << this->empName;
    cout << endl << "Email : " << this->empEmail;
    cout << endl << "Qualification : " << this->qualification;
    cout << endl << "Joining year: " << this->joinYear;
    cout << endl << "Address => ";
    address->showAddress();
}
