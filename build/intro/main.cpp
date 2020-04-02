#include <iostream>
#include <variant>
int main()
{
	std::variant<int,float> i=0; //C++17
	std::cout << "hi" << std::endl;
	return 0;
}