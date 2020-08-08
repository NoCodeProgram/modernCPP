#include <array>
#include <iostream>
#include <vector>

template<typename T>
using nocopeKeys = std::vector<std::array<T,64>>;

int main(int argc, char const *argv[])
{
	//alias
	// using nocopeKeys = std::vector<std::array<uint8_t,64>>;

	//aliasing template

	nocopeKeys<float> floatKeys;
	//std::vector<std::array<float,64>> floatKeys

	nocopeKeys<double> doubleKeys;
	//std::vector<std::array<double,64>> doubleKeys

	return 0;
}