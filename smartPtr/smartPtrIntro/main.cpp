#include <iostream>
#include <memory>
#include <vector>
class Cat
{
public:
	Cat():mAge{0}
	{
		std::cout << "cat constructor" << std::endl;
	}
	~Cat() noexcept
	{
		std::cout << "cat destructor" << std::endl;
	}
private:
	int mAge;
};

void foo()
{
	std::cout << "foo function" << std::endl;
	std::vector<Cat> cats(5);
	std::cout << "foo function end" << std::endl;
}

int main()
{
	std::cout << "before foo" << std::endl;
	foo();
	std::cout << "after foo" << std::endl;

	return 0;
}