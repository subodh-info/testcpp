#include <iostream>

using namespace std;

class Student{
    char roll;
public:
    Student(int r): roll{r}{}

    void print(){
        cout << "Roll: " << this->roll << endl;
    }
};

int main(){
    Student std(65);
    std.print();
    return 0;
}