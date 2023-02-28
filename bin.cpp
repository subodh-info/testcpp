#include <iostream>
#include <fstream>

using namespace std;

class Student {
    string name;
    int roll;

    public:
    Student(){
        this->name = "noname";
        this->roll = 0;
    }

    Student(string name, int roll) {
        this->name = name;
        this->roll = roll;
    }

    void display() {
        cout << endl << "Name : " << this->name;
        cout << endl << "Roll : " << this->roll;
    }
};

int main() {
    Student st("subodh", 21);
    fstream file;
    file.open("student.bin", ios::out | ios::in);
    if(file.is_open()) {
        file.write((char*)&st, sizeof(Student));
    }
    else {
        cout << endl << "file not open..";
    }
    file.seekg(0);
    Student subodh;
    file.read((char *)&subodh, sizeof(Student));

    st.display();
    cout << endl;
    subodh.display();

    return EXIT_SUCCESS;
}