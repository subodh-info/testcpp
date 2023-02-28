#include <iostream>
#include <ctime>

using namespace std;

int main(){
    time_t now = time(0);
    char *dt = ctime(&now);
    cout << dt << endl;
    cout << "current calendar => " << endl;
    tm *ltm = localtime(&now);
    cout << "Year : " << 1900 + ltm->tm_year << endl;
    cout << "Month : " << ltm->tm_mon + 1<< endl;
    cout << "Day : " << ltm->tm_mday << endl;
    cout << "Time : " << ltm->tm_hour << " : " << ltm->tm_min << " : " << ltm->tm_sec << endl;
    return 0;
}