#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

class Bank{
    public:
    virtual string getBankName() = 0;
};

class HDFC: public Bank{
    string BankName;

    public:
    HDFC(){
        BankName = "HDFC";
    }

    string getBankName() override{
        return this->BankName;
    }
};

class ICICI: public Bank{
    string BankName;

    public:
    ICICI(){
        this->BankName = "ICICI";
    }

    string getBankName() override {
        return this->BankName;
    }
};

class SBI: public Bank{
    string BankName;

    public:
    SBI(){
        this->BankName = "SBI";
    }

    string getBankName() override {
        return this->BankName;
    }
};

class Loan{
    protected:
    double rate;

    public:
    virtual void getInterestRate(double rate) = 0;
    void calculateLoanPayment(double loan_amount, int years){
        /*
            to calculate the monthly loan payment i.e. EMI
            rate = annual interest rate/12*100;
            n = number of monthly installments;
            1 year = 12 months.
            so, n = years*12
        */
        double EMI;
        int n;
        n = years * 12;
        rate = rate/1200;
        EMI = loan_amount * rate * (pow((1 + rate), n))/((pow((1 + rate), n)) - 1); 
        cout << endl << "EMI -> " << EMI;
    }
};

class HomeLoan: public Loan{
    void getInterestRate(double r) override {
        this->rate = r;
    }
};

class BusinessLoan: public Loan{
    void getInterestRate(double r) override {
        this->rate = r;
    }
};

class EducationLoan: public Loan{
    void getInterestRate(double r) override {
        this->rate = r;
    }
};

class AbstractFactory{
    public:
    virtual Bank* getBank(string bank) = 0;
    virtual Loan* getLoan(string loan) = 0;
};

class BankFactory : public AbstractFactory{
    public:
    Bank* getBank(string bank) override {
        if(bank == "")
            return NULL;
        
        if(bank == "HDFC"){
            return new HDFC();
        }
        else if(bank == "ICICI"){
            return new ICICI();
        }
        else if(bank == "SBI"){
            return new SBI();
        }
        else{
            return NULL;
        }
    }

    Loan* getLoan(string loan){
        return NULL;
    }
};

class LoanFactory: public AbstractFactory{
    public:
    Loan* getLoan(string loan) override {
        if(loan == ""){
            return NULL;
        }

        if(loan == "home"){
            return new HomeLoan();
        }
        else if(loan == "business"){
            return new BusinessLoan();
        }
        else if(loan == "education"){
            return new EducationLoan();
        }
        else {
            return NULL;
        }
    }

    Bank* getBank(string bank){
        return NULL;
    }
};

class FactoryCreator{
    public:
    static AbstractFactory* getAbstractFacory(string choice){
        if(choice == "bank"){
            return new BankFactory();
        }
        else if(choice == "loan"){
            return new LoanFactory();
        }
        else{
            return NULL;
        }
    }
};

int main(){
    string bankName, loanName;
    cout << endl << "Enter name of bank : ";
    getline(cin, bankName);

    cout << endl << "Enter name of loan - /home/business/education :";
    getline(cin, loanName);

    AbstractFactory *bankFactory = FactoryCreator::getAbstractFacory("bank");
    Bank *bank = bankFactory->getBank(bankName);

    cout << endl << "Enter the interest rate for "+bank->getBankName() + " : ";
    double rate;
    cin >> rate;

    cout << endl << "Enter the loan amount you want to take : ";
    double loan_amount;
    cin >> loan_amount;

    cout << endl << "Enter the number of years to pay your entire loan amount :" ;
    int years;
    cin >> years;

    cout << endl << "You are taking loan from " + bank->getBankName();
    AbstractFactory *LoanFactory = FactoryCreator::getAbstractFacory("loan");
    Loan *l = LoanFactory->getLoan(loanName);
    l->getInterestRate(rate);
    l->calculateLoanPayment(loan_amount, years);

    return 0;
}