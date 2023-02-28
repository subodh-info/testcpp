class Shape{
    float area;
    public:
    Shape();
    virtual ~Shape();
    virtual float getAea(float side);
};
ex
class Square{
    float area;
    
    public:
    Square();
    ~Square();
    virtual float getArea(float side);
};

class TempShape : public Square, public Shape{
    float area;
    public:
    TempShape();
    ~TempShape();
    float getAea(float side);
};