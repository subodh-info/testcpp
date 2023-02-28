#include <iostream>
#include<cmath>

using namespace std;

// Enter your code for reversed_binary_value<bool...>()
// static int value;
// static int i = 0;

// template<bool a>
// void reverseBinary(){
// 	value = a;
// }

// // template<typename T>
// // void reverseBinary(T t){
// // 	value = pow(2, t);
// // }

// template<bool t, bool... args>
// void reverseBinary(){
// 	value = value + t * pow(2, i);
// 	i++;
// 	//cout << "value => " << value << endl;
// 	reverseBinary<args...>();
// }

// // template<typename T>
// // void reverseBinary(T t){
// // 	value = value + (int)pow(2,t);
// // }

// template<bool... digits>
// int reversed_binary_value(){
// 	reverseBinary<digits...>();
// 	return value;
// }


template <bool a> 
int reversed_binary_value() { return a; }

template <bool a, bool b, bool... d> 
int reversed_binary_value() {
  return (reversed_binary_value<b, d...>() << 1) + a;
}

// end 
template <int n, bool...digits>
struct CheckValues {
  	static void check(int x, int y)
  	{
    	CheckValues<n-1, 0, digits...>::check(x, y);
    	CheckValues<n-1, 1, digits...>::check(x, y);
  	}
};

template <bool...digits>
struct CheckValues<0, digits...> {
  	static void check(int x, int y)
  	{
    	int z = reversed_binary_value<digits...>();
		cout << "z => " << z << endl;
    	std::cout << (z+64*y==x);
  	}
};

int main()
{
  	int t; //std::cin >> t;
	t = 1;
  	for (int i=0; i!=t; ++i) {
		int x, y;
    	//cin >> x >> y;
		x = 65;
		y = 1;
    	CheckValues<6>::check(x, y);
    	cout << "\n";
  	}
}
