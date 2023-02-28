#include <iostream>
using namespace std;

class Shape{
    public:
    int a, b;

    void setData(int a, int b){
        this->a = a;
        this->b = b;
    }
};

class Rectangle: public Shape{
    public:
    int reactArea(){
        return this->a * this->b;
    }
};

class Triangle: public Shape{
    public:
    float triangleArea(){
        return 0.5 * this->a * this->b;
    }
};

int main(){
    Rectangle r;
    r.setData(11, 5);
    cout << "Area of Rectangle : " << r.reactArea() << endl;

    Triangle tri;
    tri.setData(12,5);
    cout << "Area of Triangle: " << tri.triangleArea() << endl;
    return 0;
}