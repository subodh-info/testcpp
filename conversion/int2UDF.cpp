#include <iostream>
using namespace std;

class Time{
    int hour;
    int mins;

    public:
    Time(){ // default constructor
        hour = 0;
        mins = 0;
    }

    Time(int t){
        hour = t / 60;
        mins = t % 60;
    }

    void display(){
        cout << "Time = " << hour << " hrs and " << mins << " mins\n";
    }
};

int main(){
    Time t1;
    int dur = 95;
    t1 = dur; // conversion of int type to class type.
    t1.display();
    return 0;
}