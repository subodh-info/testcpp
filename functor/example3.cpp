#include <iostream>

using namespace std;

class Add_To_Sum{
    private:
    int initial_sum;

    public:
    Add_To_Sum(int sum){
        initial_sum = sum;
    }

    int operator()(int num){
        return initial_sum + num;
    }
};

int main(){
    Add_To_Sum add(100);
     int final_sum = add(50);
     cout << "Result : " << final_sum << endl;
    return 0;
}