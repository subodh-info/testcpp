// #include <iostream>
// class Point{
//     public:
//     // Rectangular coordinates
//     Point(float x, float y){}

//     // Polar coordinates (radius and angle)
//     Point(float r, float a){}
// };
// int main(){
//     // Ambiguous : Which constructor to be called?
//     Point p = Point(5.7, 1.2);
//     return EXIT_SUCCESS;
// }
// this problem is resolved by Named Constructor Idiom. this program modified as following -
#include <iostream>

class Point{
    private:
    float x1, y1;
    Point(float x, float y){
        x1 = x;
        y1 = y;
    }

    public:
    // Polar (radius, angle)
    static Point Polar(float, float);

    // Rectangle(x, y)
    static Point Rectangular(float, float);
    void display();
};

void Point :: display(){
    std::cout << "x :: " << this->x1 << std::endl;
    std::cout << "Y :: " << this->y1 << std::endl;
}

Point Point :: Rectangular(float x, float y){
    return Point(x, y);
}

Point Point :: Polar(float x, float y){
    return Point(x*cos(y), x*sin(y));
}

int main(){
    // Polar coordinates
    Point pp = Point::Polar(5.7, 1.2);
    std::cout << "Polar coordinates : " << std::endl;
    pp.display();

    // Rectangular coordinates
    Point pr = Point::Rectangular(5.7, 1.2);
    std::cout << "Rectangular coordinates : " << std::endl;
    pr.display();

    return EXIT_SUCCESS;
}