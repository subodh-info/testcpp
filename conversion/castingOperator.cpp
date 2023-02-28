#include <iostream>
using namespace std;

class Minute{
    public:
    int mins;
    Minute(){
        mins = 0;
    }

    void show(){
        cout << "\ntotal minutes: " << mins << endl;
    }
};

class Time{
    int hr, mins;

    public:
    Time(int h, int m){
        hr = h;
        mins = m;
    }

    Time(){
        cout << "\nTime's object created";
    }

    operator Minute (){ // overloading minute class
        Minute m;
        m.mins = (hr*60) + mins;
        return m;
    }

    void show(){
        cout << "Hour: " << hr << endl;
        cout << "Minute: " << mins << endl;
    }
};

int main(){

    Time t1(3, 40);
    Minute m;
    m = t1; // minute class is destination and Time class is source class
    t1.show();
    m.show();

    return 0;
}