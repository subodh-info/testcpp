#include <iostream>
#include <chrono>

using namespace std;

int main(){
    using namespace std::chrono;
    seconds ss(1200);
    cout << "ss, duration in second : " << ss.count() << " seconds " << endl;

    minutes m = duration_cast<minutes>(ss);
    cout << "m, duration in minutes : " << m.count() << endl;
    return 0;
}