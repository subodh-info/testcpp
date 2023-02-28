#include <iostream>
#include <string>

using namespace std;

typedef struct Students{
    int roll_no;
    string name;
    string subject;
    string teacher_name;
}stud;

int main(){
    stud s1;
    s1.roll_no = 30;
    s1.name = "Lokie ferguson";
    s1.subject = "mathematics";
    s1.teacher_name = "jasmine";

    cout << "Roll no : " << s1.roll_no << endl;
    cout << "name : " << s1.name << endl;
    cout << "Subject : " << s1.subject << endl;
    cout << "Teacher name : " << s1.teacher_name << endl;
    return 0;
}