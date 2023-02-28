#include <iostream>
using namespace std;

class Plan{
    protected:
    double rate;

    public:
    virtual void getRate() = 0;
    
    void calculateBill(int units){
        cout << "Amount : " << units*rate << " INR" << endl;
    }
};

class DomesticPlan: public Plan{
    public:
    void getRate(){
        this->rate = 3.50;
    }
};

class CommercialPlan: public Plan{
    public:
    void getRate(){
        this->rate = 7.50;
    }
};

class InstitutionalPlan: public Plan{
    public:
    void getRate(){
        this->rate = 5.50;
    }
};

class GetPlanFactory{
    Plan *plan;

    public:
    Plan* getPlan(string planType){        
        if(planType == "")
            return plan;
        
        if(planType == "domestic"){
            plan = new DomesticPlan();
        }else if(planType == "commercial"){
            plan = new CommercialPlan();
        }else if(planType == "institutional"){
            plan = new InstitutionalPlan();
        }else{
			plan = NULL;
		}
        return plan;
    }

    ~GetPlanFactory(){
        delete plan;
        plan = NULL;
    }
};

int main(){
    string plantype;
    GetPlanFactory planFactory;
    int units;

    cout << "\nEnter your plan-type : ";
    cin >> plantype;

    cout << "\nEnter total consume units : ";
    cin >> units;

    Plan *plan = planFactory.getPlan(plantype);
    plan->getRate();
    plan->calculateBill(units); 

    return 0;
}