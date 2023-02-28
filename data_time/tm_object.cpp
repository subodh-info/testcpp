#include <iostream>
#include <ctime>
using namespace std;

int main(){
    time_t now = time(0); // get current data and time
    cout << "number of second till 23 dec 2022 : " << now << endl;
    tm *ltm = localtime(&now);// localtime() function returns the pointer of tm structure to represent local time.
    cout << "year : " << 1900 + ltm->tm_year << endl; 
    cout << "Month : " << ltm->tm_mon << endl;
    cout << "Day : " << ltm->tm_mday << endl; // print month day
    cout << "Time : " << ltm->tm_hour << ": " << ltm->tm_min << ": " << ltm->tm_sec << endl;
    return EXIT_SUCCESS;
}