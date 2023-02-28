#include <iostream>
using namespace std;

class Sample{
    int var;
    static int count;

    public:
    Sample(int var) : var(var) {
        // count = 0; -> If we un-comment this line still we will get error. Because, static variable does not initialized by constructor.
        cout << "Count : " << count << endl;
        count++;
    }
};
int Sample :: count = 0; // If we comment this line then this program through error. because, Static variable does not initialized by constructure. 
int main(){
    Sample s1(2), s2(3), s3(2);
    return 0;
}