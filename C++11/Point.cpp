#include <iostream>

using namespace std;

class Points{
    char x;
    int y;
public:
    Points(int i, int j): x(i), y(j){}

    int getX(){
        return this->x;
    }

    int getY(){
        return this->y;
    }
};

int main(){
    Points point(300, 356);
    cout << "value of x : " << point.getX() << endl;
    cout << "value of y : " << point.getY() << endl;
    return 0;
}