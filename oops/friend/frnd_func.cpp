// friend function can be friend of more than one clss
#include <iostream>
using namespace std;

class B;
class A{
    protected:
    friend void min(A, B); // friend function
    friend void min(A); // friend function
    private:
    int x;

    public:
    void setData(int i){
        this->x = i;
    }
};

class B{
    int y;

    public:
    void setData(int x){
        this->y = x;
    }

    friend void min(A, B); // friend function
};

void min(A a, B b){
    if(a.x <= b.y){
        cout << "Min : " << a.x << endl;
    }else{
        cout << "Min : "<< b.y << endl;
    }
}

void min(A a){
    cout << "Value of x in A : " << a.x << endl;
}

int main(){
    A a;
    B b;
    a.setData(7);
    b.setData(3);
    min(a, b);

    min(a);
    return 0;
}