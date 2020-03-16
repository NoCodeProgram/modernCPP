#include <iostream>

int main()
{
	int a = 0;
	int b = 0;
	int c = a+b;
	double d = 2.5;

	std::cout << "a:" << (long)&a << std::endl;
	std::cout << "b:" << (long)&b << std::endl;
	std::cout << "c:" << (long)&c << std::endl;
	std::cout << "d:" << (long)&d << std::endl;

}