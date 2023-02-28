#include <iostream>
#include <chrono>
using namespace std;

int main(){
    using namespace std::chrono;

    // creating an object of type seconds or std::chrono::seconds
    seconds ss(1200);

    // count() method will return no. of ticks of the duration type chosen.
    cout << "ss, Duration in seconds : " << ss.count() << " seconds. " << endl;

    // The duration_cast() method converts the value of one duration type into another duration type.
    minutes m = duration_cast<minutes>(ss);

    cout << "m, Duration in minutes : " << m.count() << " Minutes. " << endl;

    return EXIT_SUCCESS;
}