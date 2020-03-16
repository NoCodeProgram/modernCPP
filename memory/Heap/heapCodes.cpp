#include <iostream>
#include <memory>
#include <vector>
class Cat
{
public:
	Cat()
	{
		std::cout << "meow" << std::endl;
	};
	~Cat()
	{
		std::cout << "bye" << std::endl;
	};
};
int main()
{
	std::unique_ptr<Cat> catp = std::make_unique<Cat>();
	std::vector<Cat> cats(5);

	std::unique_ptr<int> ip = std::make_unique<int>();
	*ip = 100;

	std::vector<int> ints(5);
	ints[0]= 100;
}