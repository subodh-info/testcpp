#include <iostream>
#include <memory>

using namespace std;

class Rectangle{
    int length, breadth;

    public:
    Rectangle(int l, int b){
        this->length = l;
        this->breadth = b;
    }

    int area(){
        return this->length * this->breadth;
    }
};

int main(){
    shared_ptr<Rectangle> p1(new Rectangle(10, 5));
    cout << p1->area() << endl;

    shared_ptr<Rectangle> p2;
    p2 = p1;
    cout << p2->area() << endl;

    cout << p1.use_count() << endl;
    cout << p2.use_count() << endl;
    return 0;
}