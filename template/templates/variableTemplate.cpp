#include <iostream>

template<class T>
constexpr T pi = T(3.1415926535897932385L);  // variable template

int main()
{
	int intPi = pi<int>;
	float floatPi = pi<float>;
	double doublePi = pi<double>;

	std::cout << intPi << std::endl;
	std::cout << floatPi << std::endl;
	std::cout << doublePi << std::endl;

	return 0;
}