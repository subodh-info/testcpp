#include <iostream>

using namespace std;

int monthsDay[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string weeks[] = {"mon", "tues", "wed", "thu", "fri", "sat","Sun"};
string monthsName[] = {"January", "February", "March","April","May","June","July","August","September","October","November","December"};
int year = 0;

bool isLeapYear(int year){
    return ((year % 100 == 0 && year % 4 == 00) || (year % 4 == 0));
}

int firstDayOfYear(int year){
    year = year - 1; // exlude current year
    int diff = year - 1900;
    int leapYearCount = diff/4;
    int totalDays = (diff - leapYearCount) * 365 + leapYearCount * 366 +1; // here, 1 is added to include 1st jan. of current year.
    int day = totalDays % 7;
    return day;
}

void displayMonthCalendar(int month, int firstJanuary){
    cout << endl;
    int totalDays = 0;
    int firstDay = 0;
    if(month != 0){
        for(int i =0; i < month; ++i){
            totalDays += monthsDay[i];
        }
        totalDays = totalDays + firstJanuary;
        firstDay = totalDays % 7;
    }
    else{
        firstDay = firstJanuary;
    }
    cout << endl;
    cout << "------" << monthsName[month] << " " << year << endl;
    for(int i = 0; i < 7; ++i){
        cout << weeks[i] << "\t";
    }
    cout << endl;
    int k = 0;
    for(; k < firstDay; ++k){
        cout << "\t";
    }
    
    for(int i = 1; i <= monthsDay[month]; ++i){
        cout << i << "\t";
        if(++k > 6){
            k = 0;
            cout << endl;
        }
    }
}

int main(int argc, char *argv[]){
    int month = -1;
    int day = 0;
    if(argc < 3){
        year = stoi(argv[1]);
    }
    else{
        year = stoi(argv[1]);
        month = stoi(argv[2]);    
    }

    if(year < 1900){
        cout << "invlaid year \nyear should be equal to or greatter than 1900" << endl;
        exit(0);
    }
    else{  
        if(isLeapYear(year)){
            monthsDay[1]= 29;
        }      
        day = firstDayOfYear(year);
    }

    if(month >=1 && month <=12){
        displayMonthCalendar(month-1, day);
    }
    else{
        for(int i = 1; i <= 12; ++i){
            displayMonthCalendar(i-1, day);
        }
    }
    
    return 0;
}