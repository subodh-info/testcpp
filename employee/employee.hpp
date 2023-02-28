#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#endif

#include <string>
#include "address.hpp"

using namespace std;

class Employee{
    size_t empId;
    std::string empName;
    Address *address;
    std::string qualification;
    std::string empEmail;
    int joinYear;

    public:
    Employee(size_t empId, std::string empName, std::string qualification, int joinyear, std::string empEmail, Address *address);
    void displayRecord();
};