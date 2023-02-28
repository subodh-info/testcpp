#include <iostream>
using namespace std;

class Student{
	int roll;
	string name;
	string college;
	string course;
	
	public:
	Student(int roll, string name, string college, string course);
	void display();
};

Student::Student(int roll, string name, string college, string course){
	this->roll = roll;
	this->name = name;
	this->college = college;
	this->course = course;
}

void Student :: display(){
	cout << "Roll : " << this->roll << endl;
	cout << "Name : " << this->name << endl;
	cout << "College : " << this->college << endl;
	cout << "Course : " << this->course;
}

int main(){
	Student student(101, "Subodh kumar", "Gaya college, Gaya", "Master of science in Information Technology");
	student.display();
	return EXIT_SUCCESS;
}