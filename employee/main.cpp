#include "employee.hpp"
#include <iostream>
#include <regex>
#include <vector>

using namespace std;

// for email validation
bool isValidEmail(string email){
    const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    return (regex_match(email, pattern));
}

void inputRecord(){

}

int main(){
    vector<Employee*> employeeRecord;

    size_t id;
    string name, email, qualification, city, state, pincode;
    int joiningYear;
    Employee *employee;
    Address *address;

    int choice = 0;
    do{
        cout << endl << endl;
        cout << "\n0 => for Exit";
        cout << "\n1 => for Add Record.";
        cout << "\n2 => for display Record";
        cout << endl << "Enter you choice :";
        cin >> choice;

        switch(choice){
            case 0:
                exit(0);
                break;

            case 1:
                // take input
                cout << "\nEnter Employee Id : ";
                cin >> id;

                cin.ignore();
                cout << "\nEnter name: ";
                getline(cin, name);
                email:
                cout <<"\nEnter email : ";    
                getline(cin, email);   
                if(!isValidEmail(email)){
                    cout << "invalid email is entered\nPlease try again !\n";
                    goto email;
                }

                cin.ignore();
                cout << "\nEnter qualification : ";    
                getline(cin, qualification);

                cout << "\nEnter joing year : ";
                cin >> joiningYear;

                cin.ignore();
                cout << "\nEnter city : ";
                getline(cin, city);
            
                cin.ignore();
                cout << "\nEnter state: ";
                getline(cin, state);
                
                pincode:
                cin.ignore();
                cout << endl << "Enter pincode : ";
                getline(cin, pincode);
                
                address = new Address(city, state, pincode);
                employee = new Employee(id, name, qualification, joiningYear, email, address);
                employeeRecord.push_back(employee);
                break;
            case 2:
                if(employeeRecord.size() == 0){
                    cout << endl << "No any record exist !";
                }
                else{
                    for(int i = 0; i < employeeRecord.size(); ++i){
                        Employee *employee = employeeRecord[i];
                        employee->displayRecord();
                    }
                }
                break;
            default:
                cout << "Invalid choice \nPlease try again !";
            
        }
    }while(choice != 0);
    return 0;
}