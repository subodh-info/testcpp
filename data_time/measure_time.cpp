#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;
using namespace chrono;
long factorial(int num){
    if(num <= 1)
        return 1;
    return num * factorial(num - 1);
}

int main(){
    time_point<system_clock> start, end;
    start = system_clock::now(); // get current time
    cout << "Result : " << factorial(8) << endl;
    end = system_clock::now();

    duration<double> total_seconds = end - start;
    time_t end_time = system_clock::to_time_t(end);
    cout << "complete task at " << ctime(&end_time) << endl << "total time taken : " << total_seconds.count() << " seconds" << endl;
    return 0;
}