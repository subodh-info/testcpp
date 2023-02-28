#include <iostream>
#include <ctime>

using namespace std;

int main(){
	time_t now = time(0); // get current date and time with respect to system.
	char *dt = ctime(&now); // convert data/time into string
	cout << "local data and time is : " << dt << endl;
	tm *gmtm = gmtime(&now); // convert UTC time to struct tm 
	dt = asctime(gmtm); // tm object is converted into string
	cout << "UTC data and time is : " << dt << endl;
	return 0;
}