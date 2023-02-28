#include <iostream>
using namespace std;

struct Employee{
    int eid;
    string name;
    string company;
    string technology;

    Employee(int eid, string name, string company, string technology);
    void display();
};

Employee :: Employee(int eid, string name, string company, string technology){
    this->eid = eid;
    this->name = name;
    this->company = company;
    this->technology = technology;
}

void Employee :: display(){
    cout << "Employee ID : " << this->eid << endl << "Name : " << this->name << endl << "Company : " << this->company << endl << "Technology : " << this->technology << endl;
}

int main(){
    Employee employee(101, "Subodh kumar", "Centre for computational technology", "C++ Technology");
    employee.display();
    return EXIT_SUCCESS;
}