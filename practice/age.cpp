#include <iostream>
#include <ctime>

using namespace std;
int monthsDay[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void ageCalculator(int year, int month, int day){
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int cday = ltm->tm_mday;
    int cmonth = ltm->tm_mon;
    int cyear = 1900 + ltm->tm_year;
    if(day > cday){
        cday = cday + monthsDay[month];
        cmonth--;
        day = cday - day;
    }

    if(month > cmonth){
        cmonth = cmonth + 12;
        cyear--;
        month = cmonth - month;
    }
    year = cyear - year;

    cout << "Youar are " << year << " years " << month << " month and " << day << " days old" << endl;
}

int main(){
    int year, month, day;
    cout << "Enter date of birth (year month day) format :- " << endl;
    cin >> year >> month >> day;
    ageCalculator(year, month, day);

    return 0;
}