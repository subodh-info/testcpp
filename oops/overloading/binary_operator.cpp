#include <iostream>
using namespace std;

class Test{
    private:
    int x, y;

    public:
    Test(){}
    Test(int x, int y){
        this->x = x;
        this->y = y;
    }
    Test operator +(Test);
    void display();
};

Test Test :: operator +(Test test){
   Test t;
   t.x = this->x + test.x;
   t.y = this->y + test.y;
   return t;
}

void Test :: display(){
    cout << "x=>" << this->x << endl << "Y=>" << this->y << endl;
}

int main(){
    Test t1(4, 5), t2(5, 4), t3;
    t3 = t1 + t2;
    t3.display();
    return 0;
}
