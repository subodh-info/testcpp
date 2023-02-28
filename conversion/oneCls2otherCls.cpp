#include <iostream>
using namespace std;

class CGS{
    int mts; // meters 
    int cms; // centimeters

    public:
    void showData(){
        cout << "Meters and centimeters in CGS system : ";
        cout << mts << " meters " << cms << " centimeters" << endl;
    }

    CGS(int x, int y){ // parameterize constructor
        mts = x;
        cms = y;
    }

    int getcms(){
        return cms;
    }

    int getmts(){
        return mts;
    }
};

class FPS{
    int feet;
    int inches;

    public:
    FPS(){ // non-parameterized constructor
        feet = 0;
        inches = 0;
    }

    FPS(CGS d2){
        int x;
        x = d2.getcms() + d2.getmts() * 100;
        x = x/2.5;
        feet = x / 12;
        inches = x % 12;
    }

    void showData(){
        cout << "feet and inches in FPS system ";
        cout << feet << " feets " << inches << " inches " << endl; 
    }
};

int main(){
    CGS d1(9, 10);
    FPS d2;
    d2 = d1;
    d1.showData(); 
    d2.showData(); 
    return 0;
}
