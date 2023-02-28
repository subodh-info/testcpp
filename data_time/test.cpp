#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;
using namespace chrono;

int main(){
    time_point<system_clock> current = system_clock::now();
    time_t c = system_clock::to_time_t(current);

    tm *ltm = localtime(&c);    
    cout << "current : " << ctime(&c);
    cout << "Month : " << ltm->tm_mon << endl;
    return 0;
}