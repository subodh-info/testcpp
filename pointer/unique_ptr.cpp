#include <iostream>
#include <memory> // for smart pointer

using namespace std;

class Rectangle{
    int length;
    int breadth;

    public:
    Rectangle(int length, int breadth){
        this -> length = length;
        this -> breadth = breadth;
    }

    int area(){
        return this->length * this->breadth;
    }
};

int main(){
    unique_ptr<Rectangle> p1(new Rectangle(12, 12));
    cout << "Area => " << p1->area() << endl;

    unique_ptr<Rectangle> p2;
    p2 = move(p1);
    cout << "Area => "  << p2->area() << endl;
    return 0;
}