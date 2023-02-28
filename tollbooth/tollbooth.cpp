#include <iostream>

using namespace std;

class Vehicle{
    public:
    int amount;
    virtual void setAmount() = 0;
};

class TwoWheeler: public Vehicle{
    public:
    void setAmount() override {
        this->amount = 20;
    }
};

class FourWheeler: public Vehicle{
    public:
    void setAmount() override {
        this->amount = 100;
    }
};

class HeavyVehicle: public Vehicle {
    public:
    void setAmount() override {
        this->amount = 200;
    }
};

class GetVehicleInstance{
    public:
    Vehicle* getVehicle(int vehicleType){
        if(vehicleType == 2){
            return new TwoWheeler();
        }
        else if(vehicleType == 4){
            return new FourWheeler();
        }
        else if(vehicleType > 4){
            return new HeavyVehicle();
        }
        else{
            return NULL;
        }
    }

};

class Tollbooth{
    int total_vehicle;
    int total_amt;

    bool isVehicleType(int vehicle_type) { // for vehicle type validation
        if(vehicle_type <=1 || vehicle_type == 3){
            return false;
        }
        else{
            return true;
        }
    }

    public:
    Tollbooth(){
        this->total_vehicle = 0;
        this->total_amt = 0;
    }

    void cal(char payableType = 'N'){
        if(payableType == 'P'){ // for payable vehicle
            vehicleInput:
            cout << endl << "Enter Vehicle type as following opetions - ";
            cout << endl << "2 for Two Wheeler Vehicle";
            cout << endl << "4 for Four Wheeler Vehicle";
            cout << endl << "Greater than 4 for Heavy Vehicle";
            cout << "\n";
            int vehicle_type;
            cin >> vehicle_type;
            
            if(isVehicleType(vehicle_type)){
                GetVehicleInstance vehicleInstance;
                Vehicle* vehicle = vehicleInstance.getVehicle(vehicle_type);
                vehicle->setAmount();

                this->total_amt = this->total_amt + vehicle->amount;
                this->total_vehicle++;
            }
            else{
                cout << endl << "Invalid vehicle type \nPlease input according to available options\n";
                goto vehicleInput;
            }
            
        }
        else{ // for non-payable vehicle
            this->total_vehicle++;
        }

        cout << endl << "Vehicle Added !";
    }

    void display(){
        cout << endl << "Total number of Vehicle => " << this->total_vehicle;
        cout << endl << "Total toll collected => " << this->total_amt;
    }
};

int main(){
    Tollbooth tollbooth;
    char choice;
    cout << endl << "Welcome to Tollbooth Application\n";
    do{        
        cout << endl << "Enter your choice as following - ";
        cout << endl << "P - payable Vehicle";
        cout << endl << "N - non-payable Vehicle";
        cout << endl << "D - display Record";
        cout << endl << "E - Exit";
        cout << "\n";
        cin >> choice;
        choice = toupper(choice);

        switch(choice){
            case 'P':
                tollbooth.cal('P');
                break;
            case 'N':
                tollbooth.cal('N');
                break;
            case 'D':
                tollbooth.display();
                break;
            case 'E':
                exit(0);
            default:
                cout << endl << "Invalid choice \nPlease try again !\n\n";
        }

        cout << endl << "\nDo you want to continuer - Y/N :\n";
        cin >> choice;

    }while(choice == 'Y' || choice == 'y');

    return 0;
}