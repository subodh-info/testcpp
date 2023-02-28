#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Plan{
    public:
    double rate;
    virtual void getRate() = 0;
    void calculateBill(int units){
        cout << endl << "consume units : " << units;
        cout << endl << "Rate : " << rate;
        cout << endl << "Payable amount : " << (units*rate) << endl;
    }
};

class DomesticPlan : public Plan{
    public:
    void getRate() override{
        rate = 3.50;
    }
};

class CommercialPlan: public Plan{
    public:
    void getRate() override{
        rate = 7.50;
    }
};

class InstutionalPlan: public Plan{
    public:
    void getRate() override {
        rate = 5.50;
    }
};

class GetPlanFactorty{
    Plan *plan;
    public:
    Plan* getPlan(const string planType){
        if(planType == ""){
            return plan;
        }

        if(planType == "domestic"){
            plan = new DomesticPlan();
        }
        else if(planType == "commercial"){
            plan = new CommercialPlan();
        }
        else if(planType == "institution"){
            plan = new InstutionalPlan();
        }
        else{
            plan = NULL;
        }

        return plan;
    }

    ~GetPlanFactorty(){
        delete plan;
        plan = NULL;
    }
};

int main(){
    string planType;
    GetPlanFactorty factory;
    Plan *plan;
    int consumeUnits;

    cout << "Enter you plan type => ";
    cin>> planType;
    transform(planType.begin(), planType.end(), planType.begin(), ::tolower);

    cout << endl << "Enter consume units : ";
    cin >> consumeUnits;

    plan = factory.getPlan(planType);
    plan->getRate();
    plan->calculateBill(consumeUnits);
    
    return 0;
}


