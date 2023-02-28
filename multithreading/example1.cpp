#include <iostream>
#include <thread>

using namespace std;

// function to be used in callable
void func_dummy(int N){
    for(int i = 0; i < N; ++i){
        cout << "thread 1:: callable => function pointer\n";
    }
}

// a callable object
class thread_obj{
    public:
        void operator()(int n){
            for(int i = 0; i < n; ++i){
                cout << "Thread 2::callable => function object\n";
            }
        }
};

int main(){
    // define lambda expression
    auto f = [](int n){
        for(int i = 0; i < n; ++i){
            cout << "thread 3 :: callable => lambda expression\n";
        }
    };

    // launch thread using function pointer as callable
    thread th1(func_dummy, 2);

    // launch thread using function pointer as callable
    thread th2(thread_obj(), 2);

    // launch thread using lambda expression as callable
    thread th3(f, 3);

    // wait for thread th1 to finish
    th1.join(); // --> Line-1

    // wait for thread th2 to finish
    th2.join(); // ---> line-2

    // wait for thread t3 to finish
    th3.join(); //---> line-3

    return 0;
}
/*
    If we comment line-1, line-2 and line-3 then we cannot predict the exact output. Because, these three thread execut parallely. 

    But, in this case, join() method hold to execute the next thread till the execution of current thread is finish. 
*/
