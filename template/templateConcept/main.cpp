#include <concepts>
#include <iostream>
#include <string>

template<typename T>
concept Addable = requires (T x)
{
	x + x;
	x - x;
};


template<typename T>
concept Summable = std::integral<T> || std::floating_point<T>;

template <typename T> requires Summable<T>
T sum(T a, T b)
{
	return a+b;
};

int main()
{
	std::cout << sum<int>(10,10) << std::endl;
	std::cout << sum<uint64_t>(30,40) << std::endl;
	std::cout << sum<double>(0.45,0.3) << std::endl;
//compile error //concept


	return 0;



}


