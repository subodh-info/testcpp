#include <iostream>
using namespace std;

class Time{
    int hrs, mins;
    
    public:
    Time(int, int);
    operator int();

    // destructor
    ~Time(){
        cout << "Destructor is called" << endl;
    }
};

Time :: Time(int a, int b){
    hrs = a;
    mins = b;
}

Time :: operator int(){
    cout << "Conversion of class type to primitive type " << endl;
    return (hrs * 60 + mins);
}

void TypeConversion(int hour, int mins){
    int duration;
    Time t(hour, mins); // create time class object.
    duration = t; // like, duration = (int)t;
    cout << "total minutes are " << duration << endl;

    cout << endl << "2nd method operator overloading " << endl;
    duration = t.operator int(); // operator int() is called.
    cout << "Total minutes are " << duration << endl;
}

int main(){
    int hours = 2;
    int mins = 20;

    TypeConversion(hours, mins);
    
    return 0;
}