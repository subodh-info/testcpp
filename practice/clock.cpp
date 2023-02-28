#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <Windows.h>

using namespace std;

int main(){
    time_t now = time(0);
    tm *ltm = localtime(&now); 

    int second = ltm->tm_sec;
    int minute = ltm->tm_min;
    int hour = ltm->tm_hour;

    string hours = "";
    string minutes = "";
    string seconds = "";
    string time = "AM";

    while(1){
        if(ltm->tm_hour > 12){
            hour = ltm->tm_hour - 12;
            time = "PM";
        }
        else{
            time = "AM";
        }

        
        if(hour < 10){
            hours = "0"+to_string(hour);
        }
        else{
            hours = to_string(hour);
        }

        if(minute < 10){
            minutes = "0"+to_string(minute);
        }
        else{
            minutes = to_string(minute);
        }

        if(second < 10){
            seconds = "0"+to_string(second);
        }
        else{
            seconds = to_string(second);
        }
        
        system("cls");
        cout << hours + " : " + minutes + " : " + seconds + " " + time;
        second++;
        if(second > 59){
            minute++;
            second = 0;
        }
        if(minute > 59){
            hour++;
            minute = 0;
        }
        Sleep(1000);
    }
    return 0;
}