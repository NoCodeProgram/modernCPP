#include <iostream>
#include <string>
#include <vector>

class Cat
{
public:
	explicit Cat(std::string name) : mName{std::move(name)}
	{
		std::cout << mName << "Cat constructor" << std::endl;
	}
	~Cat() noexcept
	{
		std::cout << mName << "~Cat()" << std::endl;
	}
	Cat(const Cat& other): mName(other.mName)
	{
		std::cout << mName << "copy constructor"<< std::endl;
	}
	Cat(Cat&& other) noexcept: mName{std::move(other.mName)}
	{
		std::cout << mName << "move Constructor" << std::endl;
	}
	//copy assignment
	//move assignment noexcept

private:
	std::string mName;
};

int main()
{
	std::vector<Cat> cats;
	cats.reserve(2);
	cats.emplace_back("Kitty");
	cats.emplace_back("nabi");



	return 0;
}